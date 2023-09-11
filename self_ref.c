#include<stdio.h>
struct node{
    int data;
    struct node *ptr;
};

int main()
{
    struct node a,b,c,d;
    a.data = 65;
    a.ptr = NULL;

    b.data = 70;
    b.ptr = NULL;

    c.data = 10;
    c.ptr = NULL;

    d.data = 48;
    d.ptr = NULL;

    //printf("A: Data: %d\n",a.data);
    //printf("B: Data: %d\n",b.data);
    //printf("C: Data: %d\n",c.data);
    //printf("D: Data: %d\n",d.data);

    b.ptr = &a;
    printf("A: Data: %d\n",b.ptr->data);

    a.ptr = &b;
    printf("B: Data: %d\n",a.ptr->data);

    d.ptr = &c;
    printf("C: Data: %d\n",d.ptr->data);

    c.ptr = &d;
    printf("D: Data: %d\n",c.ptr->data);

    b.ptr = &d;
    printf("D: Data: %d\n",b.ptr->data); 

    a.ptr = &c;
    printf("C: Data: %d\n",a.ptr->data); 

    c.ptr = &b;
    printf("B: Data: %d\n",c.ptr->data); 

    d.ptr = &a;
    printf("A: Data: %d\n",d.ptr->data); 
}