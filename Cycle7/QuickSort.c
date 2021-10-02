#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char *x, char *y)
{
    char t = *x;
    *x = *y;
    *y = t;
}

//function to perform partition of the arrays
int partition(char arr[], int start, int end)
{
    char pivot = arr[end];
    int p = start;
    for (int i = start; i < end; i++)
        if (arr[i] <= pivot)
        {
            swap(&arr[i], &arr[p]);
            p++;
        }
    swap(&arr[p], &arr[end]);

    return p;
}

//function to perform quicksort operation
void quickSort(char arr[], int left, int right)
{
    if (left > right)
        return;
    int p = partition(arr, left, right);
    quickSort(arr, left, p - 1);
    quickSort(arr, p + 1, right);
}

int main()
{
    char str[] = "POLYNOMIAL";
    int n = strlen(str);
    printf("\nOriginal String\n%s", str);
//function call
    quickSort(str, 0, n - 1);
    printf("\n\nAfter sorting\n%s\n", str);

    return 0;
}
