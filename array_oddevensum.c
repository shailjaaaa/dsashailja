#include<stdio.h>
int main()
{
    int n;
    int oddtotal=0;
    int eventotal=0;
   
    printf("Enter array size:");
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
        if(arr[i]%2==0)
        {
            eventotal+=arr[i];
        }
        if(arr[i]%2!=0)
        {
            oddtotal+=arr[i];
        }
    }
    printf("\nTotal of odd element in matrix:%d",oddtotal);
    printf("\nTotal of even element in matrix:%d",eventotal);


    return 0;
}