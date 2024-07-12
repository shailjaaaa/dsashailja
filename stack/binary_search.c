#include<stdio.h>
#include<stdlib.h>
int binary(int arr[],int high,int low,int x)
{
    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(arr[mid]==x)
        {
            return mid;
        }
        if(arr[mid]<x)
        {
            low=mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
};
int main()
{
    int arr[8]={1,5,10,15,20,25,30,35};
    int result=binary(arr,7,0,5);
    if(result==-1)
    {
        printf("Data not found");
    }
    else{
        printf("Element of mid is:%d",result);
    }
     return 0;
}