#include<stdio.h>
void main()
{
int i,fact=1,num;
printf("enter the number:");
scanf("%d",&num);
{
for(i=1;i<=num;i++)
fact = fact * i;
}
printf("the factorial of the number is:%d\n",fact);
}
