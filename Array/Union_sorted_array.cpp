// IMP : Enter Sorted array only

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
//I use hybrid language (C and C++) in this programme for example (using c programming statements
//for printing & for dynamically memory allocation using c++ new operator for better user
//experience and better understanding of code .. (:

struct Array
{
    int length; 
    int arr[20];
};

struct Array *Union(struct Array *A1,struct Array *A2)
{
    int i,j,k;
    i=j=k=0;
    
    struct Array *A3 = new Array;

    while(i<A1->length && j<A2->length)
    {

        if(A1->arr[i]<A2->arr[j])
        {
            A3->arr[k++] = A1->arr[i++];
        }
        else if(A2->arr[j]<A1->arr[i])
        {
            A3->arr[k++] = A2->arr[j++];
        }
        else
        {
            A3->arr[k++]=A1->arr[i++];
            j++;
        }

    }
    for(;i<A1->length;i++)
    {
        A3->arr[k++]=A1->arr[i];
    }
        
    for(;j<A2->length;j++)
    {

        A3->arr[k++]=A2->arr[j];
    }
    A3->length = k;
    return A3;
}

void Display(struct Array a)
{
    printf("Elements are :\n");
    for(int i=0;i<a.length;i++)
    {
        printf("%d ",a.arr[i]);
    }
    printf("\n");
}

int main(){
    
    struct Array A1;
    struct Array A2;
    struct Array *A3;
    
    int i;

    //values by user for 1 array..
    printf("Enter the size of array 1 :\n");
    scanf("%d",&A1.length);
    printf("Enter the elements :\n");
    for(i=0;i<A1.length;i++)
    {
        scanf("%d",&A1.arr[i]);
    }

    //values by user for 2 array..
    printf("Enter the size of array 2 :\n");
    scanf("%d",&A2.length);
    printf("Enter the elements :\n");
    for(i=0;i<A2.length;i++)
    {
        scanf("%d",&A2.arr[i]);
    }
    
    A3 = Union(&A1,&A2);
    Display(*A3);

    return 0;
}