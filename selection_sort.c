#include<stdio.h>
#include<stdlib.h>
#define n 7

int swapp;
int Selectionsort(int a[],int y)
{
    for(int i=0; i<y; i++)
    {
        for(int j= i+1; j<n; j++)
        {
            if(a[j] < a[i])
            {
                swapp = a[i];
                a[i] = a[j];
                a[j] = swapp;
            }
        }
    }
}
int main()
{
    int a[n],p;

    for(p=0; p<n; p++)
    {
        a[p] = rand() %20 + 1;
    }
    printf("Real Array: ");
    for(p=0; p<n; p++)
    {
        printf("%d ",a[p]);
    }

    Selectionsort(a,n);
    printf("\n Sort Array: ");

    for(p=0; p<n; p++)
    {
        printf("%d ",a[p]);
    }
}