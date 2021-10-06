#include <stdio.h>
#include <conio.h>
#include <string.h>
struct cricket
{
int plcode;
char name[15];
char tname[15];
float btavg;
};
main()
{
struct cricket player[50], temp;
int i, j, n;
printf("\t\tIPL20 STATS");
printf("\n Enter No. of Players : ");
scanf("%d", &n);
for(i=0; i<n; i++)
{
printf("\nEnter Player Details\n");
printf("Enter player code : ");
scanf("%d", &player[i].plcode);
printf("Enter player name : ");
scanf("%s", player[i].name);
printf("Enter IPL team name : ");
scanf("%s", player[i].tname);
printf("Enter batting average : ");
scanf("%f", &player[i].btavg);
}
for(i=0; i<n-1; i++)
{
for(j=i+1; j<n; j++)
{
if (strcmp(player[i].tname, player[j].tname) > 0)
{
temp = player[i];
player[i] = player[j];
player[j] = temp;
}
}
}

printf("\n\t PLAYER DETAILS-TEAM WISE \n");
printf("\n P.Code \t");
printf("%-15s %-15s", "Name", "Team");
printf("Bat. Avg \n");
for(i=0; i<n; i++)
{
printf("%d\t", player[i].plcode);
printf("%-15s", player[i].name);
printf("%-15s", player[i].tname);
printf("%.2f\n", player[i].btavg);
}
getch();
}
