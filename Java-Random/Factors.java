import java.util.Scanner;

public class Factors {
	public static void main (String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter the required number : ");
		int n = scan.nextInt();
		scan.close();
		System.out.println("The factors of the "+n+" are");
		for(int i = 1;i <= n;i++) {
			if(n % i == 0) {
				System.out.print(i + " ");
			}
		}
	}

}
