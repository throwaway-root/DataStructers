import java.util.Scanner;

public class Palindrome {
	public static void main (String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter the number : ");
		int n = scan.nextInt();
		scan.close();
		int temp = n,rev = 0,a;
		while (n > 0) {
			a = n % 10;
			rev = (rev * 10) + a;    
			n = n/10; 
		}
		if(temp == rev)    
			   System.out.println("The number is a palindrome.");    
			  else    
			   System.out.println("The number is not a palindrome.");    
		
	}
}
