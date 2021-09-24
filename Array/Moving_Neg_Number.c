// Move all negative numbers to beginning and positive to end with constant extra space

#include<stdio.h>
//Function For Swaping elements
void swap (int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
//Function for moving neg and positive no in there respective side..
void no_mover(int arr[],int size)
{
    int i=0,j=size-1;
    while(i<j)
    {
        while(arr[i]<0)
        {
            i++;
        }
        while(arr[j]>0)
        {
            j--;
        }
        if(i<j)
        {
            swap(&arr[i],&arr[j]);
        }
    }
}
//Function For Display Elements as output
void display (int arr [ ],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter the size of array :\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    no_mover(arr,n);
    printf("\n");
    display(arr,n);
    return 0;
}
