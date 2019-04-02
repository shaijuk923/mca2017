#include<conio.h>
#include<stdio.h>
void main()
{
int a[],k;
printf("enter the array limit");
scanf("%d",&k);
for(int i=0;i<k;i++)
{
printf("array elements are ",&a[i]);
}
for(i=k-1;i>=0;i--)
{
printf("array in reverse order",&a[i]);
}
getch();
}
