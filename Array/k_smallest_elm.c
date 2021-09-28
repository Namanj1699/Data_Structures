#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
// I use bubble_Sort for sorting array || you can also use any other_algo in which you are comfortable (: 
void bubble_Sort(int arr[] , int n)
{
    int flag;
    for(int i=0;i<n-1;i++)
    {
        flag = 0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
                flag=1;
        }
        if(flag == 0)
        {
            break;
        }
    }
}

int main()
{
    int n,k;
    printf("Enter the size of array :\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the index no which you want to see kth smallest element :\n");
    scanf("%d",&k);
    bubble_Sort(arr,n);
    printf("%d smallest element in array is : %d\n",k,arr[k-1]); //+1 use because array indexing start with 0
    return 0;
}