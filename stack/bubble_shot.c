#include<stdio.h>
#include<stdlib.h>
void sort()
{
    int n;
    int i,j;
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
        
    }
    printf("\nElements are sorted\n");
   for( i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
                
};
int main()
{
    sort();
     return 0;
}