#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct Node
{
    int info;
    struct Node *next;
};
typedef struct Node node;
node *head = NULL;
void create();
void insert_beg();
void insert_any();
void insert_end();
void del_beg();
void del_any();
void del_end();
void search();
void count();
void display();

int main()
{
    int choice;
    while (1)
    {
        printf("Enter 1 for create, 2 for insert begining, 3 for insert any node, 4 for insert end, 5 for delete begining, 6 for delete any node, 7 for delete end node, 8 for search, 9 for count, 10 for display: ");
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
            insert_any();
            break;
        case 4:
            insert_end();
            break;
        case 5:
            del_beg();
            break;
        case 6:
            del_any();
            break;
        case 7:
            del_end();
            break;
        case 8:
            search();
            break;
        case 9:
            count();
            break;
        case 10:
            display();
            break;
        default:
            printf("Wrong Choice...\n");
        }
    }
    return 0;
}

void create()
{
    int val, n, i;
    node *temp, *q;
    printf("Enter How many node you want to be create: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        temp = (node *)malloc(sizeof(node));
        printf("Enter the value: ");
        scanf("%d", &val);
        temp->info = val;
        if (head == NULL)
        {
            head = temp;
            temp->next = NULL;
            q = head;
        }
        else
        {
            q->next = temp;
            temp->next = NULL;
            q = q->next;
        }
    }
}
void insert_beg()
{
    node *temp, *q = head;
    int val;
    if (head == NULL)
    {
        printf("No list exist...\n");
        exit(0);
    }
    else
    {
        temp = (node *)malloc(sizeof(node));
        printf("Enter the value: ");
        scanf("%d", &val);
        temp->info = val;
        temp->next = q;
        head = temp;
    }
}
void insert_any()
{
    node *temp, *q = head;
    int val, pos;
    if (head == NULL)
    {
        printf("No list exist...\n");
        exit(0);
    }
    else
    {
        temp = (node *)malloc(sizeof(node));
        printf("Enter the position: ");
        scanf("%d", &pos);
        printf("Enter the value: ");
        scanf("%d", &val);
        while (q->next != pos + 1)
        {
            q = q->next;
        }
        temp->info = val;
        temp->next = q->next;
        q->next = temp;
    }
}
void insert_end()
{
    node *temp, *q = head;
    int val;
    if (head == NULL)
    {
        printf("No List Exist...\n");
        exit(0);
    }
    else
    {
        temp = (node *)malloc(sizeof(node));
        printf("Enter the value: ");
        scanf("%d", &val);
        temp->info = val;
        while (q != NULL)
        {
            q = q->next;
        }
        temp->next = NULL;
        q->next = temp;
    }
}
void del_beg()
{
    node *q = head;
    if (head == NULL)
    {
        printf("No list exist...\n");
        exit(0);
    }
    else
    {
        head = q->next;
        free(q);
    }
}
void del_any()
{
    node *q = head;
    int pos;
    if(head == NULL)
    {
        printf("No list exist...\n");
        exit(0);
    }
    else
    {

    }
}