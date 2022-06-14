#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	if(num % 2 == 0)
	{
		printf("The entered number is 'Even' Number\n");
	}
	else
	{
		printf("The entered number is 'Odd' Number\n");
	}
}
