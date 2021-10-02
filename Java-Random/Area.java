import java.util.Scanner;

public class AreaRectangle {
    Area (int length,int breadth) {
        int total = length * breadth;
        returnArea(total);
    }

    void returnArea(int total) {
        System.out.println("The Area of the Rectangle is " + total);
    }
    
    public static void main(String args[]) {
        Scanner scan =  new Scanner(System.in);
        System.out.println(" \n Enter the length of the rectangle :");
        int length = scan.nextInt();
        System.out.println(" \n Enter the breadth of the rectangle :");
        int breadth = scan.nextInt();
        Area obj = new Area(length,breadth);
    } 
}
