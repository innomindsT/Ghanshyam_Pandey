#include<stdio.h>
int main()
{
	int num ,x,y;
	printf("enter the number :");
	scanf("%d",&num);
	printf("enter the bit you want to set:");
	scanf("%d",&x);
	num |= 1 << x;
	printf("the number after set bit is :%d\n",num);
        printf("enter the bit you want to reset:");
        scanf("%d",&y);
        num &= ~(1<<y);
	printf("the number after reset bit is :%d\n",num);
	return 0;
}
