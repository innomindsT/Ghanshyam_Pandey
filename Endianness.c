#include<stdio.h>
int main()
{
	unsigned int i = 0x76543210;
	char *p = (char*)&i;
	printf("*i is : 0x%x\n",*p);
	if(*p == 0x10)
	{
		printf("Little Endian");
	}
	else
	{
		printf("Big Endian");
	}
	return 0;
}
