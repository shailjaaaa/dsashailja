#include<stdio.h>
#include<stdlib.h>
void select()
{
    int n;
    int i,j;
    int min;
    int temp;
    
    printf("Enter the size of arraY:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        arr[i]=(rand()%80)+1;
    }
    for( i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j; 
            }
        }
                temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp; 
    }
    printf("\nElements are sorted\n");
   for( i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
};
int main()
{
    select();
     return 0;
}