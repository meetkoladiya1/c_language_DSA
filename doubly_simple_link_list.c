#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head =  NULL;
void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;
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
    temp->prev = ptr;
    return;
}

void deleteend()
{
    struct node *ptr = head;
    struct node *p;
    if(head == NULL)
    {
        printf("List is empty: ");
        return;
    }
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    if(p->prev != NULL)
    {
        ptr->prev->next = NULL;
    }
    else
    {
        head = NULL;
    }
    free(ptr);
    return;
}

void firstinsert(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = head;
    temp->prev = NULL;

    if(head != NULL)
    {
        head->prev = temp;
    }
    head = temp;
    return;
}

void firstdelete()
{
    struct node *ptr = head;
    struct node *p;
    if(head == NULL)
    {
        printf("List is empty: \n");
        return;
    }
    head = ptr->next;
    if(head != NULL)
    {
        head->prev = NULL;
    }
    free(ptr);
}

void midinsert(int val,int pos)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;
    
    if(head == NULL)
    {
        head = temp;
        return;
    }
    while(ptr != NULL && ptr->data != pos)
    {
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;

    if(ptr->next != NULL)
    {
        ptr->next->prev = temp;
    }
    else
    {
        printf("position %d is not found at list: ");
        free(temp);
    }
    return;
}

void middelete(int pos)
{
    struct node *ptr = head;

    if(ptr == NULL)
    {
        printf("list is empty: \n");
        return ;
    }
    if(ptr->data == pos)
    {
        head = ptr->next;;
        if(head != NULL)
        {
            head->prev = NULL;
        }
        free(ptr);
        return;
    }
    
    while(ptr != NULL)
    {
        if(ptr->data == pos)
        {
            if(ptr->next != NULL)
            {
            ptr->next->prev = ptr->prev;
            }
            ptr->prev->next = ptr->next;
            free(ptr);
            return;
        }
        ptr = ptr->next;
    }
    printf("Node with data %d not found in the list: \n",pos);
}

void display()
{
    struct node *ptr = head;
    if(head == NULL)
    {
        printf("List is Empty...");
    }
    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main()
{
    int choice;
    int value, pos;

    while (1)
    {
        printf("1. Insert at the end\n");
        printf("2. Delete from the end\n");
        printf("3. Insert at the first\n");
        printf("4. Delete at the first\n");
        printf("5. insert mid \n");
        printf("6. Delete at the middle \n");
        printf("7. Display the list\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a value to insert: ");
            scanf("%d", &value);
            insertEnd(value);
            break;

        case 2:
            deleteend();
            break;

        case 3:
            printf("Enter a value to insert: ");
            scanf("%d", &value);
            firstinsert(value);
            break;

        case 4:
            firstdelete();
            break;

        case 5:
            printf("Enter a value to insert : ");
            scanf("%d",&value);
            printf("enter a position : ");
            scanf("%d",&pos);
            midinsert(value,pos);
            break;

        case 6:
            printf("enter a position : ");
            scanf("%d",&pos);
            middelete(pos);
            break;

        case 7:
            display();
            break;

        case 8:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
}