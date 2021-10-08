#include <stdio.h>
int main()
{
	int i, n, temp, j, arr[10];
	sort:
	printf("\nEnter the number of elements in the array: ");
	scanf("%d", &n);
	if (n<10)
	{
	    printf("\nEnter the elements: \n");
	    for(i=0;i<n;i++)
		    scanf("%d", &arr [i]);
	    for(i=0;i<n;i++)
	    {
		    for(j=0;j<n-i-1;j++)
		    {
			    if(arr[j] > arr[j+1])
			    {
				    temp = arr[j];
				    arr[j] = arr[j+1];
				    arr[j+1] = temp;
			    }
		    }
	    }
	    printf("\nThe array sorted in ascending order is :\n");
	    for(i=0;i<n;i++)
		    printf("%d\t", arr[i]);
	}
	else
	{
	    printf("Invalid input. Enter a no. less than 10\n");
	    goto sort;
	}
	return 0;
}
