#include<stdio.h>
#include<string.h>
int main()
{
	char str[500];
	int i;
	printf("Enter the string : ");
	scanf("%s",str);
	for(i=0;str[i] != '\0';++i);
	printf("Length of the string is: %d\n",i);
	return 0;
}
