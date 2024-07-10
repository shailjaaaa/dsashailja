#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element of %d:",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    int x;
    printf("Enter the size of array:");
    scanf("%d",&x);
    int abc[x];
    for(int j=0;j<x;j++)
    {
        printf("Enter element of %d:",j);
        scanf("%d",&abc[j]);
    }
    for(int j=0;j<x;j++)
    {
        printf("%d\t",abc[j]);
    }
    return 0;
}