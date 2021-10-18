//You are given two sorted arrays(a,b) of integers.
//You have to merge them and form one sorted array.
//You have to do it in linear time complexity.

#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void display(int arr[],int n)
{
    printf("Array After Sorting :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

void bubble_sort(int arr[ ],int n)
{
    int flag,i,j;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(&arr[j],&arr[j+1]);
            flag=1;
        }
        if(flag==0)
        {
            break;
        }
    }
    display(arr,n);
}


void merge(int arr[ ],int a1_len,int arr1[ ],int a2_len)
{
    int length = a1_len+a2_len;
    int temp[length];
    int l,m,n;
    l=m=n=0;
    for(int i=0;i<a1_len;i++)
    {
        temp[n++] = arr[l++];
    }
    for(int j=0;j<a2_len;j++)
    {
        temp[n++] = arr1[m++];
    }
    bubble_sort(temp,length);
}

int main(){
    int m,n,i;
    
    printf("\nEnter the size of array 1 :");
    scanf("%d",&m);
    
    int arr[m];
    
    printf("Enter elements :\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the size of array 2 :");
    scanf("%d",&n);
    
    int arr1[n];
    
    printf("Enter elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }

    merge(arr,m,arr1,n);
    return 0;
}
