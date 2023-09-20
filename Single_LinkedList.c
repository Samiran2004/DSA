#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void create();
void insert_beg();
void display();
void insert_anyNode();
void insert_end();

struct Node
{
    int info;
    struct Node *next;
};
typedef struct Node node;

node *head = NULL;

int main()
{
    int choice;
    while (1)
    {
        printf("Enter 1 for create, 2 for insert begining, 3 for display, 4 for exit, 5 for insert at any node, 6 for insert at end: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            insert_beg();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        case 5:
            insert_anyNode();
            break;
        case 6:
            insert_end();
            break;
        default:
            printf("Wrong choice...\n");
        }
    }
    return 0;
}
void create()
{
    int i, n, val;
    node *temp, *q;
    printf("How many nodes you want to be creat: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        temp = (node *)malloc(sizeof(node));
        printf("Enter the value: ");
        scanf("%d", &val);
        temp->info = val;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            q = head;
        }
        else
        {
            q->next = temp;
            q = q->next;
        }
    }
}
void insert_beg()
{
    node *q = head, *temp;
    int val;
    temp = (node *)malloc(sizeof(node));
    printf("Enter the value: ");
    scanf("%d", &val);
    temp->info = val;
    temp->next = q->next;
    head = temp;
}
void display()
{
    node *q = head;
    while (q != NULL)
    {
        printf("The value is: %d\n", q->info);
        q = q->next;
    }
}
void insert_anyNode()
{
    int val, pos;
    printf("Enter the value: ");
    scanf("%d", &val);
    node *temp = (node *)malloc(sizeof(node));
    node *q = head;
    temp->info = val;
    printf("Enter the position: ");
    scanf("%d", &pos);
    while (q->next != NULL)
    {
        q = q->next;
    }
    temp->next = q->next;
    q->next = temp;
}
void insert_end()
{
    int val;
    node *temp = (node *)malloc(sizeof(node));
    node *q = head;
    printf("Enter the value: ");
    scanf("%d", &val);
    temp->info = val;
    while (q->next != NULL)
    {
        q = q->next;
    }
    q->next = temp;
    temp->next = NULL;
}

