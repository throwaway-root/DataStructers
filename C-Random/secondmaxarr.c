#include <stdio.h>

int main()
{
    int n,i;
    int max = -100,secondMax = -100;
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
            max = arr[i];
    }
    
    for(i=0;i<n;i++)
    {
        if(arr[i] > secondMax && arr[i]!=max)
        {
            secondMax = arr[i];
        }
    }
    printf("%d",secondMax);
}
