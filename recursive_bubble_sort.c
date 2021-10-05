#include <stdio.h>

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
 
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1]) {
            swap(arr, i, i + 1);
        }
    }
 
    if (n - 1 > 1) {
        bubbleSort(arr, n - 1);
    }
}
 
int main(void)
{
    int arr[] = { 3, 5, 8, 4, 1, 9, -2 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    bubbleSort(arr, n);
    printArray(arr, n);
 
    return 0;
}


// OUTPUT

// -2 1 3 4 5 8 9 
