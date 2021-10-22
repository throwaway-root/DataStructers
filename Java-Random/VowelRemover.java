import java.util.*;
public class VowelRemover
{
  public static void main(String[] args) 
  {
	
   Scanner sc=new Scanner(System.in);
  
   String s1,s2;
  
   System.out.println("Enter the word:");
   s1=sc.nextLine();
  
   s2=s1.replaceAll("[aeiouAEIOU]","");
  
   System.out.println("String after removing vowels is: "+s2);
  
   sc.close();
  
 }
}

