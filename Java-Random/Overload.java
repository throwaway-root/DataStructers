import java.util.Scanner;

class Tutorial {
    double result;
    
    void area(int a, int b) {
        result = a*b;
        System.out.println("\n The area of the rectangle is "+result);
    }

    void area(int a) {
        result  = a*a*3.14;
        System.out.println("\n The area of the circle is " + result);
    }

}



class Overload {

    public static void main(String args[]){
        Tutorial obj = new Tutorial();
        Scanner scan = new Scanner(System.in);
        int option;

        do {
            System.out.println("\n \t 1.Area of Rectangle \n \t 2.Area of Circle \n \t 3.Exit");
            System.out.println("\n \n Enter the required option :");
            option = scan.nextInt();
           
            switch (option) {
                case 1:
                        System.out.println("\n Enter the length :");
                        int a = scan.nextInt();
                        System.out.println("\n Enter the breadth :");
                        int b = scan.nextInt();
                        obj.area(a,b);
                        break;

                case 2: 
                        System.out.println("\n Enter the radius of the circle :");
                        int c = scan.nextInt();
                        obj.area(c);
                        break;

                case 3: 
                        break;        

                default:
                        System.out.println("Enter a valid option ");
                break;
            }
        } while (option != 3);
    }
}
    
