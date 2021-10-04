#include<stdio.h>

int i,j;

void firstfit(int[],int[],int,int);

void main()
{

    int block[10],process[10],p_no,b_no;
    

    printf("Enter the number of processes: ");
    scanf("%d",&p_no);

    printf("Enter the memory required for process:-");
    for (i=0;i<p_no;i++)
    {
        printf("\nProcess ID = %d -- ",i);
        scanf("%d",&process[i]);
    }

    printf("Enter the memory blocks: ");
    scanf("%d",&b_no);
    printf("Enter the memory blocks:\n");
    for(i=0;i<b_no;i++)
        scanf("%d",&block[i]);
    
    firstfit(process,block,p_no,b_no);
}

void firstfit(int process[],int block[],int p_no,int b_no)
{
    int index;
    printf("Process ID\tStatus\t\tBlock Number\n");
    for(i=0;i<p_no;i++)
    {
        index=-1;
        for(j=0;j<b_no;j++)
            if(block[j]>=process[i])
            {
                    index=j;
                    block[index]-=process[i];
                    break;
            }
            if(index==-1)
                printf("%d\t\tNot allocated\t----\n",i);
            
            else
                printf("%d\t\tAllocated\t%d\n",i,index);
    }
}
