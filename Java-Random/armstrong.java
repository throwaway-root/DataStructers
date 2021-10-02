import java.util.Scanner;

public class Armstrong {
	public static void main (String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter the number : ");
		int n=scan.nextInt();
		int temp = n;
		int a,num =0;
		scan.close();
		while(n > 0) {
			a = n % 10;
			n = n/10;
			num = num + (a*a*a);
			
		}
		if(temp == num)
			System.out.println(temp+" is an Armstrong Number.");
		else
			System.out.println(temp+" is not an Armstrong Number");
		

}
}
