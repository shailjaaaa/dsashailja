#include<stdio.h>
#include<stdlib.h>
int partition(int a[],int lb, int ub)
{
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    int temp;

    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }

        if(start<end)
        {
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;

    return end;
}

void quicksort(int a[], int lb, int ub)
{
    if(lb<ub)
    {
        int loc=partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}
int main()
{
    int arr[5]={50,5,30,4,80};
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    quicksort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    return 0;
}
