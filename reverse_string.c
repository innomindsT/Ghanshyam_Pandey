#include<stdio.h>
int main()
{
	char str[500],rev[500];
	int i, j, count=0;
	printf("Enter the string: ");
	scanf("%s",&str);
	while(str[count] != '\0')
	{
		count++;
	}
	j = count -1;
	for(i=0; i<count;i++)
	{
		rev[i] = str[j];
	        j--;
	}
	rev[i] ='\0';
	printf("Reverse of the string: %s\n",rev);
	return 0;
}
