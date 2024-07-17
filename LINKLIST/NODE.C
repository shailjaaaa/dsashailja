// self refential node

#include<stdio.h>
struct node{
    int data;
    struct node *ptr;
};

int main()
{
    struct node a, b,c,d;
    // a.data = 60;
    printf("Value of a is:");
    scanf("%d",&a.data);
    printf("Value of b is:");
    scanf("%d",&b.data);
    printf("Value of c is:");
    scanf("%d",&c.data);
    printf("Value of d is:");
    scanf("%d",&d.data);
    a.ptr = NULL;

    // b.data = 70;
    
    b.ptr = NULL;
    c.ptr = NULL;

    // printf("Data of a is: \n%d\t",a.data, );
    // printf("\n\nData of b is: \n%d\t%c",b.data,);

    a.ptr = &b;
    b.ptr = &c;
    c.ptr = &d;
    d.ptr = &a;
    printf("Data of a is: %d\n",d.ptr->data);
    printf("Data of b is: %d\n",a.ptr->data);
    printf("Data of c is: %d\n",b.ptr->data);
    printf("Data of d is: %d\n",c.ptr->data);
}