#include <stdio.h>
#include <stdlib.h>

void main()
{
	int RQ[100], TotalHeadMoment = 0, initial, size, move;
	int ch = 0;
	int i, n, j;
	printf("DISK SCHEDULING\n");
	printf("----------------\n");
	while (ch != 4)
	{
		printf("\n1.FCFS\n2.Scan\n3.C-scan\n4.Exit\n");
		printf("Enter your option : ");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			printf("FCFS\n");
			printf("------\n");
			{
				printf("Enter the number of Requests\n");
				scanf("%d", &n);
				printf("Enter the Requests sequence\n");
				for (i = 0; i < n; i++)
					scanf("%d", &RQ[i]);
				printf("Enter initial head position\n");
				scanf("%d", &initial);
				for (i = 0; i < n; i++)
				{
					TotalHeadMoment = TotalHeadMoment + abs(RQ[i] - initial);
					initial = RQ[i];
				}
				printf("Total head moment is %d", TotalHeadMoment);
			}
			break;

		case 2:
			printf("SCAN\n");
			printf("-----\n");
			{
				TotalHeadMoment = 0;
				printf("Enter the number of Requests\n");
				scanf("%d", &n);
				printf("Enter the Requests sequence\n");
				for (i = 0; i < n; i++)
					scanf("%d", &RQ[i]);
				printf("Enter initial head position\n");
				scanf("%d", &initial);
				printf("Enter total disk size\n");
				scanf("%d", &size);
				printf("Enter the head movement direction for high 1 and for low 0\n");
				scanf("%d", &move);

				for (i = 0; i < n; i++)
				{
					for (j = 0; j < n - i - 1; j++)
					{
						if (RQ[j] > RQ[j + 1])
						{
							int temp;
							temp = RQ[j];
							RQ[j] = RQ[j + 1];
							RQ[j + 1] = temp;
						}
					}
				}
				int index;
				for (i = 0; i < n; i++)
				{
					if (initial < RQ[i])
					{
						index = i;
						break;
					}
				}
				if (move == 1)
				{
					for (i = index; i < n; i++)
					{
						TotalHeadMoment = TotalHeadMoment + abs(RQ[i] - initial);
						initial = RQ[i];
					}
					TotalHeadMoment = TotalHeadMoment + abs(size - RQ[i - 1] - 1);
					initial = size - 1;
					for (i = index - 1; i >= 0; i--)
					{
						TotalHeadMoment = TotalHeadMoment + abs(RQ[i] - initial);
						initial = RQ[i];
					}
				}
				else
				{
					for (i = index - 1; i >= 0; i--)
					{
						TotalHeadMoment = TotalHeadMoment + abs(RQ[i] - initial);
						initial = RQ[i];
					}
					TotalHeadMoment = TotalHeadMoment + abs(RQ[i + 1] - 0);
					initial = 0;
					for (i = index; i < n; i++)
					{
						TotalHeadMoment = TotalHeadMoment + abs(RQ[i] - initial);
						initial = RQ[i];
					}
				}
				printf("Total head movement is %d", TotalHeadMoment);
			}
			break;
		case 3:

			printf("C-SCAN\n");
			printf("-------\n");

			{
				TotalHeadMoment = 0;
				printf("Enter the number of Requests\n");
				scanf("%d", &n);
				printf("Enter the Requests sequence\n");
				for (i = 0; i < n; i++)
					scanf("%d", &RQ[i]);
				printf("Enter initial head position\n");
				scanf("%d", &initial);
				printf("Enter total disk size\n");
				scanf("%d", &size);
				printf("Enter the head movement direction for high 1 and for low 0\n");
				scanf("%d", &move);

				for (i = 0; i < n; i++)
				{
					for (int j = 0; j < n - i - 1; j++)
					{
						if (RQ[j] > RQ[j + 1])
						{
							int temp;
							temp = RQ[j];
							RQ[j] = RQ[j + 1];
							RQ[j + 1] = temp;
						}
					}
				}

				int index;
				for (i = 0; i < n; i++)
				{
					if (initial < RQ[i])
					{
						index = i;
						break;
					}
				}

				if (move == 1)
				{
					for (i = index; i < n; i++)
					{
						TotalHeadMoment = TotalHeadMoment + abs(RQ[i] - initial);
						initial = RQ[i];
					}

					TotalHeadMoment = TotalHeadMoment + abs(size - RQ[i - 1] - 1);

					TotalHeadMoment = TotalHeadMoment + abs(size - 1 - 0);
					initial = 0;
					for (i = 0; i < index; i++)
					{
						TotalHeadMoment = TotalHeadMoment + abs(RQ[i] - initial);
						initial = RQ[i];
					}
				}

				else
				{
					for (i = index - 1; i >= 0; i--)
					{
						TotalHeadMoment = TotalHeadMoment + abs(RQ[i] - initial);
						initial = RQ[i];
					}

					TotalHeadMoment = TotalHeadMoment + abs(RQ[i + 1] - 0);

					TotalHeadMoment = TotalHeadMoment + abs(size - 1 - 0);
					initial = size - 1;
					for (i = n - 1; i >= index; i--)
					{
						TotalHeadMoment = TotalHeadMoment + abs(RQ[i] - initial);
						initial = RQ[i];
					}
				}

				printf("Total head movement is %d", TotalHeadMoment);
			}
			break;

		case 4:
			exit(0);
		}
	}
}
