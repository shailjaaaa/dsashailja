#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;

void Insert_End(int num)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = num;
    temp->next = head;

    if (head == NULL && tail == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}

void Insert_First(int num)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = num;
    temp->next = head;
    head = temp;
    tail->next = head;
}

void Delete_End()
{
    struct node *ptr = tail;
    struct node *p = head;

    if (head == NULL)
    {
        printf("\n\nThe list is already empty!!!!!");
    }

    if (head == tail)
    {
        head = tail = NULL;
        return;
    }
    while (p->next != tail)
    {
        p = p->next;
    }
    p->next = head;
    tail = p;
    free(ptr);
}

void Delete_First()
{
    if (head == NULL)
    {
        printf("\n\nThe list is already empty!!!!!");
    }
    if (head == tail)
    {
        head = tail = NULL;
        return;
    }

    struct node *ptr = head;
    head = head->next;
    tail->next = head;
    free(ptr);
}

void display()
{
    struct node *ptr = head;
    printf("\n");

    if (head == NULL)
    {
        printf("\n\nThe list is already empty!!!!!");
    }
    else
    {
        while (ptr != tail)
        {
            printf("%d\t", ptr->data);
            ptr = ptr->next;
        }
        printf("%d\t", ptr->data);
        printf("\n");
    }
}
int main()
{
    int n, pos;
    do
    {
        printf("\nPress 1.INSERT END");
        printf("\nPress 2.DELETE END");
        printf("\nPress 3.INSERT FIRST");
        printf("\nPress 4.DELETE FIRST");
        printf("\nPress 5.DISPLAY");

        printf("\n\nEnter your choice:");
        scanf("%d", &n);

        if (n <= 0 || n > 5)
        {
            printf("\n Invalid Input!!!\n");
        }
        if (n == 1)
        {
            int num;

            printf("Enter the number you want to add in the List :");
            scanf("%d", &num);

            Insert_End(num);
        }

        else if (n == 2)
        {
            Delete_End();
        }
        else if (n == 3)
        {
            int num;

            printf("Enter the number you want to add in the List :");
            scanf("%d", &num);

            Insert_First(num);
        }

        else if (n == 4)
        {
            Delete_First();
        }
        else if (n == 5)
        {
            display();
        }

    } while (n > 0 || n <= 5);
}
