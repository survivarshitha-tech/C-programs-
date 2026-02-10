//write a program to check the given number is even
#include<stdio.h>
int main()
{
    int a;
    printf("enter the number:\n");
    scanf("%d",&a);
    int res=(a%2==0);
    printf("%d is an even number is %d\n",a,res);
    return 0;
}