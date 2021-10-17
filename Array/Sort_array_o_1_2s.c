#include<stdio.h>
//I use bubble_sort for solve this question you are free handed to use any sorting algo which you better know(:
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void bubble_sort(int arr [ ],int n)
{
    int i,j;
    int flag=0; //we use flag for better optimization..
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}
int main(){
    int n;
    printf("Enter the size of array :\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);
    printf("After sorting :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}