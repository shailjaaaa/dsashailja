#include<stdio.h>
#include<stdlib.h>
int binary(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else{
        return n*binary(n-1);
    }
};
int main()
{
    int sum;
    sum=binary(4);
    printf("Factorial of 4 is:%d",sum);
     return 0;
}