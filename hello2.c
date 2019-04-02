#include<stdio.h>
#include<conio.h>
void main()
{
int fact=1,i,n;
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial of &n is",&fact);
getch();
}
