// Using c++ wap to find the maximum and minimum element in an array!
#include<iostream>

using namespace std;

class Array
{
    public:
    int maximum(int arr[],int length);
    int minimum(int arr[],int length);
};

int Array::maximum(int arr[],int length)
{
    int max= arr[0];
    
    for(int i=1;i<length;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}

int Array::minimum(int arr[],int length)
{
    int min= arr[0];
    
    for(int i=1;i<length;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}

int main()
{
    int n;
    cout<<"Enter the size of array :"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        
        cin>>arr[i];
    }
    Array ar; //Object created of class array
    cout<<"Maximum Element :"<<ar.maximum(arr,5)<<endl;
    cout<<"Minimum Element :"<<ar.minimum(arr,5)<<endl;
    return 0;
}