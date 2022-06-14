#include<stdio.h>
int main()
{
        int arr[100],n,i,x,swap;
        printf("Enter number of elements\n");
        scanf("%d",&n);
        printf("Enter %d integers\n",n);
        for(i = 0; i < n ; i++)
                scanf("%d",&arr[i]);
        for(i = 0; i < n - 1; i++)
        {
                for(x = 0; x < n - i - 1; x++)
                {
                        if(arr[x] < arr[x + 1])
                        {
                                swap = arr[x];
                                arr[x] = arr[x+1];
                                arr[x+1] = swap;
                        }
                }
        }
        printf("sorted list in descending order :\n");
        for(i = 0; i < n; i++)
                printf("%d\n",arr[i]);
        return 0;
}
