#include<stdio.h>
#include<stdlib.h>
#define N 5
int Stack[N];
int Top=-1;

void push()
{
    int x;
    printf("Value of the element in Stack :");
    scanf("%d",&x);
    if(Top==N-1)
    {
        printf("Stack is full\n");                                              
    }
    else
    {
        Top++;
        Stack[Top]=x;
    }
};
    void pop()
    {
        int Temp;
        if(Top==-1)
        {
        printf("This Stack is delete");
        }
        else{
            Temp=Stack[Top];
            printf("%d",Temp);
            Top--;
        }
        
    };
    void display()
    {
        if(Top==-1)
        {
            printf("Empty space");
        }
        else{
        for(int i=0;i<=Top;i++)
        {
            printf("%d\t",Stack[i]);
        }
        }
    };


int main()
{
    int y;
    do
    {
    printf("\n1.PUSH\n");
    printf("2.POP\n");
    printf("3.Display\n");
    printf("4.Exit\n");
    printf("Select number of choice:");
    scanf("%d",&y);

    switch(y)
    {
        case 1:
        push();
        break;

        case 2:
        pop();
        break;

        case 3:
        display();
        break;

        case 4:
        printf("EXIT");
        break;
        defualt:
        printf("ERROR!!");
    }
    
    }
    while(y!=4);
     return 0;
}