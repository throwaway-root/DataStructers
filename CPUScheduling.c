#include <stdio.h>

void fcfs()
{
	int T[10][5], n, i, j, k;
	int tot_TT = 0, tot_WT = 0;
	int tot = 0;

	printf("Enter the number of processes: ");
	scanf("%d", &n);
	printf("Enter the Arrival and burst time of ");
	for (i = 0; i < n; i++)
	{
		printf("Process : P%d\n", i);
		scanf("%d%d", &T[i][0], &T[i][1]);
		printf("\n");
	}

	for (i = 0; i < n; i++)
		for (j = 0; j < n - i - 1; j++)
			if (T[j][0] > T[j + 1][0])
				for (k = 0; k < 5; k++)
					T[j][k] = T[j + 1][k];

	for (i = 0; i < n; i++)
	{
		T[i][2] = T[i][1] + tot;
		tot += T[i][1];
		T[i][3] = T[i][2] - T[i][0];
		T[i][4] = T[i][3] - T[i][1];
		tot_TT += T[i][3];
		tot_WT += T[i][4];
	}

	printf("\nArrival\tBurst\tCT\tTT\tWT\t\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t%d\t%d\t%d\t%d\n", T[i][0], T[i][1], T[i][2], T[i][3], T[i][4]);
	}
}

void sjf()
{
	int i, j, temp, n, sum = 0, pid, bt[10], at[10], process[10], ct[10], tat[10], wt[10], current_time = 0, start_time, completed = 0, count;
	float avg_wt = 0, avg_tat = 0;
	printf("enter the number of processes");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter arrival time of  process %d\n", i + 1);
		scanf("%d", &at[i]);
		printf("Enter burst time of  process %d\n", i + 1);
		scanf("%d", &bt[i]);
		process[i] = i;
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (at[i] > at[j])
			{
				temp = at[i];
				at[i] = at[j];
				at[j] = temp;
				temp = bt[i];
				bt[i] = bt[j];
				bt[j] = temp;
				temp = process[i];
				process[i] = process[j];
				process[j] = temp;
			}
		}
	}
	while (completed < n)
	{
		count = 0;
		for (i = completed; i < n; i++)
		{
			if (at[i] <= current_time)
			{
				count++;
			}
			else
			{
				break;
			}
		}
		if (count > 1)
		{
			for (i = completed; i < (completed + count - 1); i++)

			{
				for (j = i + 1; j < (completed + count); j++)
				{
					if (bt[i] > bt[j])
					{
						temp = at[i];
						at[i] = at[j];
						at[j] = temp;
						temp = bt[i];
						bt[i] = bt[j];
						bt[j] = temp;
						temp = process[i];
						process[i] = process[j];
						process[j] = temp;
					}
				}
			}
		}
		start_time = current_time;
		ct[completed] = start_time + bt[completed];
		tat[completed] = ct[completed] - at[completed];
		wt[completed] = tat[completed] - bt[completed];
		current_time = ct[completed];
		printf("\n p%d\t %d\t %d\t %d\t %d\t%d\t", process[completed], at[completed], bt[completed], ct[completed], tat[completed], wt[completed]);
		avg_tat = tat[completed];
		avg_wt = wt[completed];
		completed++;
	}
}

void rr()
{
	int T[10][5], n, i, j, k;
	int tot_TT = 0, tot_WT = 0;
	int tot = 0;
	int count, rem[10], quantum;

	printf("Enter the number of processes");
	scanf("%d", &n);
	count = n;
	printf("Enter the Arrival and burst time of ");
	for (i = 0; i < n; i++)
	{
		printf("Process :P%d\n", i);
		scanf("%d%d", &T[i][0], &T[i][1]);
		printf("\n");
		rem[i] = T[i][1];
	}
	printf("\nEnter the quantum");
	scanf("%d", &quantum);

	for (i = 0; i < n; i++)
		for (j = 0; j < n - i - 1; j++)
			if (T[j][0] > T[j + 1][0])
				for (k = 0; k < 5; k++)
					T[j][k] = T[j + 1][k];

	while (count)
	{
		for (i = 0; i < n; i++)
		{
			if (rem[i] > quantum)
			{
				tot += quantum;
				rem[i] -= quantum;
			}
			else if (rem[i] != 0)
			{
				tot += rem[i];
				rem[i] = 0;
				T[i][2] = tot;
				T[i][3] = T[i][2] - T[i][0];
				T[i][4] = T[i][3] - T[i][1];
				tot_TT += T[i][3];
				tot_WT += T[i][4];
				count--;
			}
		}
	}

	printf("\nArrival\tBurst\tCT\tTT\tWT\t\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t%d\t%d\t%d\t%d\n", T[i][0], T[i][1], T[i][2], T[i][3], T[i][4]);
	}
}

int main()
{
	int option;
	printf("\n Enter the required option: ");
	do
	{
		printf("\n CPU Scheduling Algorithms: \n 1. FCFS \n 2. SJF \n 3. Round Robin \n 4. Exit  ");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
		{
			fcfs();
			break;
		}

		case 2:
		{
			sjf();
			break;
		}

		case 3:
		{
			rr();
			break;
		}

		case 4:
		{
			break;
		}
		default:
		{
			printf("\n Enter a valid option!");
		}
		}
	} while (option != 4);
}
