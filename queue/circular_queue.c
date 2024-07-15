#include<stdio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;
void enqueue(int x,int n,int queue[])
{
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else if(((rear+1)%n)==front)
    {
        printf("Overflow");
    }
    else{
        rear=(rear+1)%n;
        printf("rear:%d",rear);
        printf("\n");
        
        queue[rear]=x;
    } 
}
void dequeue(int queue[],int n)
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
        printf("Delete:%d\n",queue[front]);
        front=(front+1)%n;
    }
}
void display(int queue[],int n)
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("Data not found");
    }
    else
    {
        while(i!=rear)
        {
            printf("%d\t",queue[i]);
            i=(i+1)%n;
        }
        printf("%d",queue[rear]);
        printf("\n");
    }
}

int main()
{

    int n=5;
    int queue[n];
    enqueue(10,n,queue);
    enqueue(20,n,queue);
    enqueue(-1,n,queue);
    display(queue,n);
    dequeue(queue,n);
    display(queue,n);
    return 0;
}