// self refential node

#include<stdio.h>
struct node{
    int data;
    char ch;
    struct node *ptr;
};

int main()
{
    struct node a, b;
    a.data = 60;
    a.ch = 'A';
    a.ptr = NULL;

    b.data = 70;
    b.ch = 'B';
    b.ptr = NULL;

    // printf("Data of a is: \n%d\t%c",a.data, a.ch);
    // printf("\n\nData of b is: \n%d\t%c",b.data, b.ch);

    a.ptr = &b;
    b.ptr = &a;
    printf("Data of b is: \n%d\t%c",a.ptr->data, a.ptr->ch);
}