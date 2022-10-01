#include <stdio.h>
#include <stdlib.h>
void main()
{
  int f[50], st, len, c, k, inde[50], count = 0, p, a, b;
  int i, j, option = 0, n;
  while (option != 4)
  {
    printf("\n1.sequential\n2.indexed\n3.linked\n4.exit\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
      printf("\nSEQUENTIAL FILE ALLOCATION\n");
      printf("-----------------------------\n");

      for (i = 0; i < 50; ++i)
      {
        f[i] = 0;
      }
    z:
      printf("\nEnter the starting block and length of the file:");
      scanf("%d%d", &st, &len);
      for (j = st; j < (st + len); ++j)
      {
        if (f[j] == 0)
        {
          f[j] = 1;
          printf("\n%d->%d", j, f[j]);
        }
        else
        {
          printf("Block already allocated");
        }
      }
      if (j == (st + len))
      {
        printf("\n The file is allocated to disk");
      }
      printf("\nDo you want to enter more files\nPress '1' to enter more files '0' to exit :");
      scanf("%d", &b);
      if (b == 1)
        goto z;

      break;
    case 2:
      printf("INDEXED FILE ALOCATION\n");
      printf("----------------------\n");
      for (i = 0; i < 50; i++)
      {
        f[i] = 0;
      }
    x1:
      printf("Enter index block\t");
      scanf("%d", &p);
      if (f[p] == 0)
      {
        f[p] = 1;
        printf("Enter no of files on index\t");
        scanf("%d", &n);
      }
      else
      {
        printf("Block already allocated\n");
        goto x1;
      }
    y:
      printf("\nEnter the file blocks to be indexed :");
      for (i = 0; i < n; i++)
        scanf("%d", &inde[i]);
      for (i = 0; i < n; i++)
      {
        if (f[inde[i]] == 1)
        {
          printf("Block already allocated");
          goto y;
        }
      }
      for (j = 0; j < n; j++)
      {
        f[inde[j]] = 1;
      }
      printf("\n Allocated");
      printf("\n File indexed");
      for (k = 0; k < n; k++)
      {
        printf("\n %d- >%d:%d", p, inde[k], f[inde[k]]);
      }
      printf("\nDo you want to enter more files\nPress '1' to enter more files and '0' to exit :");
      scanf("%d", &c);
      if (c == 1)
        goto x1;

      break;
    case 3:

      printf("LINKED FILE ALLOCATION\n");
      printf("-----------------------\n");

      for (i = 0; i < 50; i++)
      {
        f[i] = 0;
      }
      printf("Enter how many blocks that are already allocated :");
      scanf("%d", &p);
      if (p != 0)
      {
        printf("\nEnter the blocks no.s that are already allocated :");
        for (i = 0; i < p; i++)
        {
          scanf("%d", &a);
          f[a] = 1;
        }
      }

    x2:
      printf("Enter the starting index block & length :");
      scanf("%d%d", &st, &len);
      k = len;

      for (j = st; j < (k + st); j++)
      {
        if (f[j] == 0)
        {
          f[j] = 1;
          printf("\n%d->%d", j, f[j]);
        }
        else
        {
          printf("\n %d-  >file is already allocated", j);
          k++;
        }
      }

      printf("\nDo you want to enter more files\nPress '1' to enter more files '0' to exit :");
      scanf("%d", &c);

      if (c == 1)
        goto x2;

      break;

    case 4:
      exit(0);
    }
  }
}
