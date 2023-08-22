/*
    AND -> first digit 0 than no check condition
    OR  -> first digit 1 than no check condition
*/

#include<stdio.h>
int main()
{
    int a=1,b=2,c,d=1;
    
    c=a ||++b||--d;     //1 2 1 1
    printf("a: %d,b: %d,c: %d,d: %d",a,b,c,d);

    //c=a && ++b && --d;  //1 3 0 0
    //printf("a: %d,b: %d,c: %d,d: %d",a,b,c,d);

    //c=a && ++b && d;    //1 3 1 1
    //printf("a: %d,b: %d,c: %d,d: %d",a,b,c,d);

    //c=a || ++b;         //1 2 1
    //printf("a: %d,b: %d,c: %d",a,b,c);

    //c=--a || --b;       //0 1 1
    //printf("a: %d,b: %d,c: %d",a,b,c);

    //c=a || --b;         //1 2 1
    //printf("a: %d,b: %d,c: %d",a,b,c);

    //c=++a || --b;       //2 2 1
    //printf("a: %d,b: %d,c: %d",a,b,c);

    //c=++a || b;         //2 2 1
    //printf("a: %d,b: %d,c: %d",a,b,c);

    //c=a || b;           //1 2 1
    //printf("a: %d,b: %d,c: %d",a,b,c);

    //c=a && ++b;         //1 3 1
    //printf("a: %d,b: %d,c: %d",a,b,c);

    //c=--a && ++b;       //0 2 0
    //printf("a: %d,b: %d,c: %d",a,b,c);
 
    //c=--a && b;         //0 2 0
    //printf("a: %d,b: %d,c: %d",a,b,c);

}