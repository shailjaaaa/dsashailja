#include<stdio.h>
int main()
{
    int arr[3][3];
   
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter the element of [%d] and [%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==0)
            {
                printf("\t");
            }
            else 
            {
            printf("%d\t",arr[i][j]);
            }
           
        }
        printf("\n");
    }
  
     return 0;
}