#include<stdio.h>
#include<stdlib.h>
#define n 7

int swapp;
int Bubblesort(int a[],int x)
{
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x -1; j++)
        {
            if(a[j] > a[j+1])
            {
                swapp = a[j];
                a[j] = a[j+1];
                a[j+1] = swapp;
            }
        }
    }
}

int main()
{
    int a[n],m;
    for(m=0; m<n; m++)
    {
        a[m] = rand()%20 + 1;
    }
    printf("Real Array: ");
    for(m=0; m<n; m++)
    {
        printf("%d ",a[m]);
    }

    Bubblesort(a,n);
    printf("\n Sort Array: ");

    for(m=0; m<n; m++)
    {
        printf("%d ",a[m]);
    }
}