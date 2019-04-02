#include<stdio.h>
#include<curses.h>
#include<stdlib.h>
void main()
{
int fact=1,i,n;
system("clear");
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial of %d is %d \n", n, fact);
wgetch;
}
