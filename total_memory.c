#include <stdio.h>
#include <stdlib.h>
int main()
{ 

	int* ptr;
	int n, i,total_memory; 
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Entered number of elements: %d\n", n); 
	ptr = (int*)malloc(n * sizeof(int));
	if (ptr == NULL) 
	{
	printf("Memory not allocated.\n");
	exit(0);
	}
	else 
	{
          printf("Memory successfully allocated using malloc.\n");
          total_memory = n * 2;
          printf("total_memory:%d\n",total_memory);
	for (i = 0; i < n; ++i) 
	{
	ptr[i] = i + 1;
	}	 
	printf("The elements of the array are: \n");

	for (i = 0; i < n; ++i) 	
	{
	printf("%d, ", ptr[i]);
	}
	} 
	return 0;
}




