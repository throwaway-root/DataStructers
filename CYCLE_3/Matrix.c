#include <stdio.h>

int i, j;

int readarray(int a[10][10], int row, int col)
{
    printf("\n Enter the elements of the array :");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

int printarray(int a[10][10], int row, int col)
{
    printf("\n The Matrix is: \n ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n ");
    }
}

int tuplearray(int a[10][10], int row, int col){
    printf("\n The matrix represented in tuple form :");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (a[i][j] != 0)
            {
                printf("(%d,%d,%d), ", i, j, a[i][j]);
            }
        }
    }
}

int sumarray(int a[10][10],int b[10][10],int c[10][10], int row, int col) {
    printf("\n The resultant matrix after addition : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf(" %d  ", c[i][j]);
        }
        printf("\n");
    }
}

    int transpose(int a[10][10],int b[10][10], int row, int col)
{
    printf("\n \n The transpose of the matrix : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            b[i][j] = a[j][i];
        }
    }

    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int row, col, i, j, arr1[10][10], arr2[10][10], arr3[10][10], tarr1[10][10], tarr2[10][10], tarr3[10][10];
    printf("\n Enter the number of rows :");
    scanf("%d", &row);
    printf("\n Enter the number of columns :");
    scanf("%d", &col);

    readarray(arr1,row,col);
    printarray(arr1,row,col);
    tuplearray(arr1,row,col);
    transpose(arr1,tarr1,row,col);
    tuplearray(tarr1, row, col);

    printf("\n \n Second Matrix :");
    readarray(arr2, row, col);
    printarray(arr2, row, col);
    tuplearray(arr2, row, col);
    transpose(arr2, tarr2, row, col);
    tuplearray(tarr2, row, col);

    sumarray(arr1,arr2,arr3,row,col);
    tuplearray(arr3, row, col);
    transpose(arr3, tarr3, row, col);
    tuplearray(tarr3, row, col);
}
