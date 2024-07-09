#include<stdio.h>
int main()
{
    int arr[3][3];
    int dia,up,low;
    dia=0,up=0,low=0;

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
            printf("%d\t",arr[i][j]);
           if(i==j)
           {
            dia+=arr[i][j];         
           } 
           else if(i<j)
           {
            up+=arr[i][j];
           }
           else
           {
            low+=arr[i][j];
           }
        }
        printf("\n");
    }
    printf("Diagonal element sum:%d\n",dia);
    printf("upper triangle element sum:%d\n",up);
    printf("Lower triangle element sum:%d\n",low);
   
     return 0;
}