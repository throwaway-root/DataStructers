#include<stdio.h>
void main()
{    
	int i;
	int j;
	int n;
    int a[100][100];
    int d1=0;
    int d2=0;
	printf("Enter size of square matrix \n");
	scanf("%d",&n);
	printf("\n Enter elements in array \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n array is \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d ",a[i][j]);
		}
	printf("\n")	;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				d1=d1+a[i][j];
			}

		}
	}
    	for(i=0;i<n;i++)
	    {
		    for(j=0;j<n;j++)
		    {
			    if( i + j == n-1)
			    {
			    	d2=d2+a[i][j];
			    }
            }
    }	
	printf("\n sum of diagonal 1 is %d and diagonal 2 is %d \n",d1,d2);
}
  
