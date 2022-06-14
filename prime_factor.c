#include<stdio.h>
int main()
{
	int i,j,num,prime;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("All the prime factors of %d are : ",num);
	for(i = 2; i <= num ; i++)
	{
		if(num % i == 0)
		{
			prime = 1;
			for(j = 2; j <= i/2; j++)
			{
				if(i % j == 0)
				{
					prime = 0;
					break;
				}
			}
			if(prime == 1)
			{
				printf("%d, ",i);
			}
		}
	}
	printf("\n");
	return 0;
}
