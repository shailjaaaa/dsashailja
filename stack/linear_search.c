#include<stdio.h>
#include<stdlib.h>
void search()
{
     int n;
     int data;
    printf("Enter the size of arraY:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=(rand()%50)+1;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter choice element:");
    scanf("%d",&data);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==data)
        {
            printf("Data search:%d",i);
            break;
        }
    }
    int i;
    if(arr[i]!=data)
    {
        printf("Element not found");
    }

};
int main()
{
    search();
   
     return 0;
}