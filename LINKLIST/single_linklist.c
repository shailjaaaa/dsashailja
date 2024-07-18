#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

void Insert_End(int val)
{
    struct  node *ptr = head;

    struct node *temp=malloc(sizeof(struct node ));
    temp->data=val;
    temp->next=NULL;

    if(head==NULL)
    {
        head=temp;
        return;
    }
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    return; 
}

void Delete_End()
{
    struct node *ptr=head;
    struct  node *p;
    if(head->next==NULL)
    {
        head=NULL;
        free(ptr);
        return;
    }

    while(ptr->next!=NULL)
    {
        p=ptr;
        ptr=ptr->next;
    }
    p->next=NULL;
    free(ptr);
    return ;
}

void Insert_First(int val)
{
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=head;
    head=temp;
}
void Delete_First()
{
    struct node *ptr=head;
    head=ptr->next;
    free(ptr);
}

void Insert_Mid(int num,int pos)
{
    struct node *ptr=head;
    struct node *p;

    struct node *temp=malloc(sizeof(struct node));
    temp->data=num;
    while(ptr->data!=pos)
    {
        p=ptr;
        ptr=ptr->next;
    }
    p->next=temp;
    temp->next=ptr;
}
void Delete_mid(int pos)
{
    struct node *ptr=head;
    struct node *p;
    while(ptr->data!=pos)
    {
        p=ptr;
        ptr=ptr->next;
    }
    p->next=ptr->next;
    free(ptr);
}

void display()
{
    struct node *ptr=head;

    if(head==NULL)
    {
        printf("The list is already empty....");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
    }
    printf("\n");
}

int main()
{
    int n,pos;

    do
    {
        printf("\nPress 1. INSERT END");
        printf("\nPress 2. DELETE END");
        printf("\nPress 3. INSERT FIRST");
        printf("\nPress 4. DELETE FIRST");
        printf("\nPress 5. INSERT MID");
        printf("\nPress 6. DELETE MID");
        printf("\nPress 7. DISPLAY");

        printf("\n\nEnter your choice:");
        scanf("%d",&n);

        if(n<=0 || n>7)
        {
            printf("\nINVALID INPUT!!!!!\n");
        }

        if(n==1)
        {
            int num;
            printf("Enter the number you want to add in the list:");
            scanf("%d",&num);
            Insert_End(num);
        }

        else if(n==2)
        {
            Delete_End();
        }
        else if(n==3)
        {
            int num;
            printf("Enter the number you want to add in the list:");
            scanf("%d",&num);

            Insert_First(num);
        }
        else if(n==4)
        {
            Delete_First();
        }

        else if(n==5)
        {
            int num;
            printf("Enter the position where you can add your new number:");
            scanf("%d",&pos);

            display();

            printf("Enter the number you want to add in the list:");
            scanf("%d",&num);

            Insert_Mid(num,pos);
            display();
        }

        else if(n==6)
        {
            printf("Enter the position where you can delete your data:'");
            scanf("%d",&pos);

            Delete_mid(pos);

            display();
        }
        else if(n==7)
        {
            display();
        }
    }
    while(n>0||n<=7);
    return 0;
}