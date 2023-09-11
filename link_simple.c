#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertend(int val)
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
void deleteend()
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

void firstinsert(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = head;
    head = temp;
    return;
}

void firstdelete()
{
    struct node *ptr = head;
    struct node *p;

    head = ptr->next;
    free(ptr);
}
void display()
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    if(temp == NULL)
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

void midinsert(int val,int pos)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    
    while(ptr->data != pos)
    {
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;
    return;
}

void middelete(int pos)
{
    struct node *ptr = head;
    struct node *temp =malloc(sizeof(struct node));
    struct node *p;
    
    while(ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    free(ptr);
    return;
}
/*int main()
{
    firstinsert(10);
    firstinsert(20);
    firstinsert(30);
    firstinsert(40);    
    firstinsert(50);
    display();

    firstdelete();
    display();

    midinsert(50,20);
    display();

    middelete(20);
    display();
}*/

int main()
{
    int choice, val, pos;

    while (1)
    {
        printf("1. Insert end\n");
        printf("2. Delete end\n");
        printf("3. first Insert\n");
        printf("4. first delete\n");
        printf("5. mid insert\n");
        printf("6. mid delete\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value insert at the end: ");
            scanf("%d", &val);
            insertend(val);
            break;

        case 2:
            deleteend();
            break;

        case 3:
            printf("Enter value insert at the first: ");
            scanf("%d", &val);
            firstinsert(val);
            break;

        case 4:
            firstdelete();
            break;

        case 5:
            printf("Enter value insert an the mid: ");
            scanf("%d", &val);
            printf("Enter your position: ");
            scanf("%d",&pos);
            midinsert(val,pos);
            break;

        case 6:
            printf("Enter value delete in the mid: ");
            scanf("%d", &pos);
            middelete(pos);
            break;

        case 7:
            display();
            break;

        case 8:
            exit(0);

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}