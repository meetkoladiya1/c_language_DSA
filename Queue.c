#include<stdio.h>
#define n 10
int a[n],i;
int r=-1,f=-1;

int display()
{
    if(r<0 || f<0)
    {
        printf("Array is Empty .");
    }
    else{
        for(i=f+1;i<r+1;i++)
        {
            printf("%d ",a[i]);
        }      
    }
}

int insertEnd(int val)
{
    if(f<0 || r<0)
    {
        f=0,r=0;
        a[r]=val;
    }
    if(r > n-1)
    {
        printf("Array is full.");
    }
    else{        
        r++;
        a[r]=val;
    }
}
int Firstdelete()
{
    if(f==r)
    {
        f=-1,r=-1;
    }
    if(f<0 || r<0)
    {
        printf("Array is empty.");
    }
    else{
        f++;
    }
}
int main()
{
     int ch;
    printf("1. Display");
    printf("\n2. Insert Array ");
    printf("\n3. Delete Array ");
    printf("\n0. End Program ");
    do{
        int val;

        printf("enyer  your choice :");
        scanf("%d",& ch);
        switch (ch)
        {
        case 1:
          display();
            
            break;
                
        case 2:
                printf("Enter Your Array :");
                scanf("%d",&val);
                insertEnd(val);
                break;

        case 3:
                break;
                Firstdelete();
                break;
                 case 0:
                printf("Program is closed.");
                break;

        default:
                printf("You Enterd Wrong choice .");
                break;
        }
    }while(ch != 0);
    return 0;
}