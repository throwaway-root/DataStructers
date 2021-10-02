import java.util.Scanner;

public class OddEven {
	public static void main (String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter the number : ");
		int n=scan.nextInt();
		scan.close();
		if(n % 2 == 0) {
			System.out.println(n+" is an even number.");
		}
		else {
			System.out.println(n+" is an odd number.");
		}

}
}
