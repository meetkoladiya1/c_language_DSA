#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
        return;
    }
    while(ptr->next != NULL)
    {
        ptr= ptr->next;
    }
    ptr->next = temp;
    return;
}


void display()
{
    struct node *ptr = head;
    if(head == NULL)
    {
        printf("List is Empty...");
    }
    else
    {
        while(ptr != NULL)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}

void deleteEnd()
{
    struct node *ptr = head;
    struct node *p;
    if(ptr->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }
    while(ptr->next != NULL)
    {
        p=ptr;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
}
/*int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    display();

    deleteEnd();
    deleteEnd();
    deleteEnd();
    deleteEnd();
    display();
}*/
int main()
{
    int ch,val;
    while(1)
    {
        printf("1. insertEnd\n");
        printf("2. deleteEnd\n");
        printf("3. display\n");
        printf("4. Program Exit\n");

        printf("ENter your choice ");
        scanf("%d ",&ch);

        switch(ch)
        {
            case 1:
                printf("ENter insert End: ");
                scanf("%d ",&val);
                insertEnd(val);
                break;

            case 2:
                deleteEnd();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);
                break;

            default:
                printf("Invalid choice please try again: ");
        }
    }
    return 0;
}