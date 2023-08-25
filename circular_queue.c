#include<stdio.h>
#define n 5
int a[n];
int f = -1, r = -1;
int Display()
{
    int i = f;
    if(f<0)
    {
        printf("Queue is empty: ");
    }
    else
    {
        do
        {
            printf("%d ",a[i]);
            i= (i+1) % n;
        } while (i != (r+1) % n);
        
    }
    printf("\n");
}

int InsertEnd(int val)
{
    if(r<0)
    {
        f = r = 0;
        a[r] = val;
    }
    else    if((r+1) % n == f)
    {
        printf("Queue is full: ");
    }
    else
    {
        r = (r+1) % n;
        a[r] = val;
    }
}

int FirstDelete()
{
    if (f < 0) 
    {
        printf("Queue is Empty\n");
    } else 
    {
        f = (f+1) % n;
        if (f > r) 
        {
            f = -1;
            r = -1;
        }
    }
}
int main()
{
    InsertEnd(10);
    InsertEnd(20);
    InsertEnd(30);
    InsertEnd(40);
    InsertEnd(50);
    Display();

    FirstDelete();
    Display();

    InsertEnd(60);
    Display();

    
}