#include <stdio.h>
#define n 5
int a[n];
int top = -1,i;
int Display()   
{
    for (int i = 0; i <= top; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int firstInsert(int value)
{
    if(top >= n-1)
    {
        printf("\n Array is full: ");
    }
    else
    {
        for(i=top; i>=0; i--)
        {
            a[i+1]=a[i];
        }
        a[0] = value;
        top++;
    }
}

int firstDelete()
{
    int x;
    if(top < 0)
    {
        printf("\n Array is already empty: ");
    }
    else
    {
        for(i=0; i<=top; i++)
        {
            a[i] = a[i+1];
        }
        top--;
        return x;
    }
}
int InsertEnd(int val) 
{
    if (top >= n-1) 
    {
        printf("Array is full\n");
    }  
    else 
    {
        top++;
        a[top] = val;
    }
}

int DeleteEnd() 
{
    if (top < 0) 
    {
        printf("Array is empty\n");
    } 
    else 
    {
        int x = a[top];
        top--;
        return x;
    }
}

int main() 
{
    firstInsert(100);
    firstInsert(200); 
    firstInsert(300); 
    firstInsert(400); 
    firstInsert(500); 
    Display();

    firstDelete(); 
    Display();
    return 0;
}

/*switch(int choice)
{
    if(choice <= 5)
    {
        printf("\n run is failed: ");
    }
    else
    {
        printf("\n run time: ");
    }

    case1:
    printf("Ans: ",Display());
    break;

    case2:
    printf("Ans: ",firstInsert(100,200));
    break;
    
    case3:
    printf("Ans: ",firstDelete());
    break;

    case4:
    printf("Ans: ",InsertEnd(10,20));
    break;

    case5:
    printf("Ans: ",DeleteEnd());
    break;

    default:
    printf("inncorect value: ");
}*/
