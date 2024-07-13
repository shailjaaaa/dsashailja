#include<stdio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;
void enqueue(int x,int n,int queue[])
{
    if(rear==n-1)
    {
        printf("Overflow");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}
void dequeue(int queue[])
{
    if(front==-1 && rear==-1)
    {
        printf("Underflow");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("%d\n",queue[front]);
        front++;
    }
}
void display(int queue[])
{
    if(front==-1 && rear==-1)
    {
        printf("Data not found");
    }
    else
    {
        for(int i=front;i<rear+1;i++)
        {
            printf("%d\t",queue[i]);
        }
        printf("\n");
    }
}
void peek(int queue[])
{
    if(rear==-1 && front==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("peek :%d\n",queue[front]);
    }
}
int main()
{

    int n=5;
    int queue[n];
    enqueue(10,n,queue);
    enqueue(20,n,queue);
    enqueue(-1,n,queue);

    display(queue);
    peek(queue);
    dequeue(queue);
    peek(queue);
    display(queue);
    return 0;
}