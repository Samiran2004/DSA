#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *next;
} *top = NULL;
void push()
{
    int elm;
    printf("Enter the data: ");
    scanf("%d", &elm);
    struct stack *temp = (struct stack *)malloc(sizeof(struct stack));
    temp->data = elm;
    temp->next = top;
    top = temp;
}
void pop()
{
    int elm;
    struct stack *temp = (struct stack *)malloc(sizeof(struct stack));
    temp = top;
    elm = top->data;
    top = top->next;
    free(temp);
    printf("%d is pop from the stack.", elm);
}
void peep()
{
    printf("The top element is: %d\n", top->data);
}
void display()
{
    while (top != NULL)
    {
        printf("%d\n", top->data);
        top = top->next;
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("Enter 1 for push, 2 for pop, 3 for display top element, 4 for display all element, 5 for exit: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid Input.....\n");
        }
    }
    return 0;
}