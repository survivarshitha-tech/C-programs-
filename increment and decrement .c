//write a program to increment and decrement
#include<stdio.h>
int main()
{
    int a=10;
    int b=++a;
    int c=a++;
    int d=b--;
    printf("a=%d \tb=%d \tc=%d \t d=%d",a,b,c,d);
    return 0;
}