#include<stdio.h>
void cycle_rotation(int arr[ ],int n);
int main(){
    int i,n;
    printf("Enter the size of array :\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    cycle_rotation(arr,n);
    printf("Array after cycle rotation");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
void cycle_rotation(int arr[ ],int n)
{
    int i,temp,temp1=0;
    temp = arr[n-1];
    for(i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0] = temp;
}
