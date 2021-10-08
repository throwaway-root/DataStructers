import javax.swing. * ;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class traffic_light extends JFrame implements ActionListener {
  JRadioButton r,g,y;
  traffic_light() {
    r = new JRadioButton("Red");
    y = new JRadioButton("Yellow");
    g = new JRadioButton("Green");
    r.setBounds(75, 50, 100, 30);
    y.setBounds(75, 75, 100, 30);
    g.setBounds(75, 100, 100, 30);
    ButtonGroup bg = new ButtonGroup();
    bg.add(r);
    bg.add(y);
    bg.add(g);
    r.addActionListener(this);
    y.addActionListener(this);
    g.addActionListener(this);
    add(r);
    add(y);
    add(g);
    setSize(400, 400);
    setLayout(null);
    setVisible(true);
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
  }
  public void paint(Graphics gr) {
    gr.setColor(Color.red);
    gr.drawRect(195, 45, 105, 270);
    gr.setColor(Color.black);
    gr.drawOval(200, 50, 90, 60);
    gr.drawOval(200, 150, 90, 60);
    gr.drawOval(200, 250, 90, 60);
    gr.setColor(Color.gray);
    gr.fillOval(200, 50, 90, 60);
    gr.fillOval(200, 150, 90, 60);
    gr.fillOval(200, 250, 90, 60);
    if (r.isSelected()) {
      gr.setColor(Color.red);
      gr.fillOval(200, 50, 90, 60);
    }
    if (y.isSelected()) {
      gr.setColor(Color.yellow);
      gr.fillOval(200, 150, 90, 60);
    }
    if (g.isSelected()) {
      gr.setColor(Color.green);
      gr.fillOval(200, 250, 90, 60);
    }
  }
  public void actionPerformed(ActionEvent ae) {
    repaint();
  }
  public static void main(String[] args) {
    SwingUtilities.invokeLater(new Runnable() {
      public void run() {
        new traffic_light();
      }
    });
  }
}