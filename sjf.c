/*
   Shortest Job First-nonpreemptive algorithm with different arrival time
*/

#include<stdio.h>

struct process
{
    int pid; //process ID
    int at;  // Arrival Time
    int bt; //Burst Time
    int ct; //Completion Time
    int wt; //Waiting Time
    int tat; // Turn Around Time
    int flag; 
};

int main()
{
    int n;
    
    printf("Enter total number of processes : ");
    scanf("%d",&n);
    struct process proc[n],temp;
    int i,j;
    
    for(i=0; i<n; i++)
    {	
        proc[i].flag = 0;
    }
    printf("\nEnter Process-ID, Arrival-time and Burst-time for each process :\n");
    for(int j=0; j<n; j++)
    {
		printf("Process %d : ",j+1);
        scanf("%d %d %d",&proc[j].pid,&proc[j].at,&proc[j].bt);
    }
    
    // printf("before sorting according to arrival-time\n");
    // printf("process-id\tarrival-time\tburst-time\n");
    // for(i=0;i<n;i++)
    // {
    //     printf("%d\t\t%d\t\t%d\n",proc[i].pid,proc[i].at,proc[i].bt);
    // }


    //sorting according to arrival time
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(proc[i].at > proc[j].at)
            {
                temp = proc[i];
                proc[i] = proc[j];
                proc[j] = temp;
            }
        }
    }

    // printf("process-id\tarrival-time\tburst-time\n");
    // for(i=0;i<n;i++)
    // {
    //     printf("%d\t\t%d\t\t%d\n",proc[i].pid,proc[i].at,proc[i].bt);
    // }
    // printf("after sorting according to arrival-time\n");
    
    int r=proc[0].at;
    int p=1;
    int k=0;
    int min=proc[0].bt;


    while(proc[p].at==r && p<=n)
    {
      if(proc[p].bt < min)
        {
             min = proc[p].bt;
             k=p;
        }
      p++;
    }

    proc[k].ct = proc[k].at+proc[k].bt;

    proc[k].flag=1;
    int l=k;
    int d=proc[k].ct;


    int counter=1;
    while(counter!=n)
    {
		int min1 = 1000;
		for(i=0;i<n;i++)
		{
			if(proc[i].flag==0 && proc[i].at<=d)
			{
				if(proc[i].bt < min1)
				{
					min1 = proc[i].bt;
					
					k=i;
					
				}
			}
		}
		proc[k].ct = proc[l].ct+min1;
		proc[k].flag = 1;
		d = proc[k].ct;
		counter++;
		l=k;

    }

    int tat1=0,wt1=0; // Total waiting time and Total Turn Around Time
    for(i=0;i<n;i++)
    {
        proc[i].tat=proc[i].ct-proc[i].at;
        tat1+=proc[i].tat;
    }


    for(i=0;i<n;i++)
    {
    	proc[i].wt=proc[i].tat-proc[i].bt; // Waiting Time = Turn Around Time - Burst Time
    	wt1+=proc[i].wt;
    }

    //printf("process-id\tarrival-time\tburst-time\tcompletion-time\twaiting-time\tturn-around-time\n");

	printf("\n-----------------------------------------------------------------------------------------");
    printf("\nProcesses  Arrival Time    Burst Time   Completion Time  Waiting Time  Turn-Around Time");
    printf("\n-----------------------------------------------------------------------------------------");
    for(i=0;i<n;i++)
    {
    	printf("\n%6d  %8d  %13d  %14d  %15d %15d",proc[i].pid,proc[i].at,proc[i].bt,proc[i].ct,proc[i].wt,proc[i].tat);
    }

    
    float tat2,wt2;
    tat2=(float)tat1/(float)n; //Average Turn Around Time
    wt2=(float)wt1/(float)n; //Average Waiting Time 
    printf("\nAverage Turn-Around-Time = %.3f\n",tat2);
    printf("\nAverage Waiting-Time = %.3f\n",wt2);

    return 0;
}
