#include<stdio.h>
#include<stdlib.h>
#define n 10
int linearsearch(int a[], int x)
{
    for(int i=0; i<n; i++)
    {
        if(a[i] == x)
        {
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int a[n],i,ele;
    for(i=0; i<n; i++)
    {
        a[i] = rand()%500 + 1;
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n Enter search element: ");
    scanf("%d",&ele);

    int m = linearsearch(a,ele);
    if(m == -1)
    {
        printf("Element is not found");
    }
    else
    {
        printf("search element is found at %d position",m);
    }
}