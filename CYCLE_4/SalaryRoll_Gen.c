#include <stdio.h>
#include <conio.h>
struct employee
{
int empid;
char ename[15];
int basic;
float hra;
float da;
float it;
float gross;
float netpay;
};
void main()
{
struct employee emp[50];
int i, j, n;
printf("\n Enter No. of Employees : ");
scanf("%d", &n);
for(i=0; i<n ;i++)
{
printf("\n Enter Employee Details\n");
printf("Enter Employee Id : ");
scanf("%d", &emp[i].empid);
printf("Enter Employee Name : ");
scanf("%s", emp[i].ename);
printf("Enter Basic Salary : ");
scanf("%d", &emp[i].basic);
}
for(i=0; i<n; i++)
{
emp[i].hra = 0.02 * emp[i].basic;
emp[i].da = 0.01 * emp[i].basic;
emp[i].it = 0.05 * emp[i].basic;
emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
emp[i].netpay = emp[i].gross - emp[i].it;
}

printf("\n\n\n\t\t\t\tXYZ& Co. Payroll\n\n");
for(i=0;i<80;i++)
printf("*");
printf("EmpId\tName\t\tBasic\t HRA\t DA\t IT\tGross\t\tNet Pay\n");
for(i=0;i<80;i++)
printf("*");
for(i=0; i<n; i++)
{
printf("\n%d\t%-15s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",
emp[i].empid, emp[i].ename, emp[i].basic, emp[i].hra,
emp[i].da, emp[i].it, emp[i].gross, emp[i].netpay);
}
printf("\n");
for(i=0;i<80;i++)
printf("*");
getch();
}
