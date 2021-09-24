#include<stdio.h>
int main()
{
    int n;
    printf("Enter Array Size :\n");
    scanf("%d",&n);

    int arr[n];

    // Taking values from users..
    printf("Enter elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Before Reverse :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    printf("After Reverse :\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
