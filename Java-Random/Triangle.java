public class Triangle {
    Triangle () {
        int s1 = 3, s2 = 4, s3 = 5;
        int p = (s1 + s2 + s3);
        int s = p / 2;
        int area = (int) Math.sqrt(s * (s - s1) * (s - s2) * (s - s3));
        System.out.println("\n Perimeter of the Triangle = " + p);
        System.out.println("\n Area of the Triangle = " + area);
    }
    public static void main(String args[]) {
        Triangle obj = new Triangle();
    }
}
