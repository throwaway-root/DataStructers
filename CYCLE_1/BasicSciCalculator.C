#include <stdio.h>
#include<conio.h>

void binarycal();
void primenum();
void armstrongnum();
void oddeven();
void factnum();

int main()
	{
		int calfun;
		clrscr();
		printf("Which Calculator is needed? \n \t 1. Binary Calculator \n \t 2. Number Functions ");
		printf("\n Enter the option to select : ");
		scanf("%d",&calfun);
		if(calfun == 1)
		{
			binarycal();
		}

		else if(calfun == 2)
		{
			int nfopt;
			printf("You have selected Number Functions  ! \n");
			printf("Functions are \n 1. To Find a Number is prime or not? \n 2. To Find Armstrong or not \n 3. To Find Whether a number is odd or even \n 4. To Find Factorial \n ");
			printf("Enter the Option : ");
			scanf("%d",&nfopt);
			switch(nfopt)
				{
				case 1 : primenum();break;

				case 2 : armstrongnum();break;

				case 3 : oddeven();break;

				case 4 : factnum();break;

				default : printf("Wrong Input");break;			}
				}
		 getch();
		 return 0;
	}

void binarycal()
	{       char optr;
		double n1,n2;
		printf("You have selected Binary Calculator  ! \n");
		printf("Enter the Binary Expression(e.g 1+2) : ");
		scanf("%lf %c %lf",&n1,&optr,&n2);

		switch(optr)
		{
			case '+':
				printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
				break;

			case '-':
				printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
				break;

			case '*':
				printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
				break;

			case '/':
				printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
				break;

			// operator doesn't match any case constant +, -, *, /
			default:
				printf("Error! operator is not correct");
		}
	}
	

void armstrongnum()

	{
		int n,r, sum=0,temp;
		printf("Enter the number to find Armstrong or not :" );
		scanf("%d",&n);
		temp=n;
		while(n>0)
			{
					r=n%10;
					sum=sum+(r*r*r);
					n=n/10;
			}
		if(temp==sum)
			printf("armstrong  number ");
		else
			printf("not armstrong number");
	}

void oddeven()
	{
				int num;
				printf("Enter an integer: ");
				scanf("%d", &num);

				if(num % 2 == 0)
					printf("%d is even.", num);
				else
					printf("%d is odd.", num);
	}
	
void factnum()
	{
					int i,fact=1,number;    
					 printf("Enter a number: ");    
					  scanf("%d",&number);    
						for(i=1;i<=number;i++)
						{    
						  fact=fact*i;    
						}    
					  printf("Factorial of %d is: %d",number,fact);   
	}
