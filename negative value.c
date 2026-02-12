//write a program to check the given number is negative value
#include<stdio.h>
int main()
{
    int a;
    printf("enter the number:\n");
    scanf("%d",&a);
    int res=(a<0);
    printf("%d is a negative  value is %d\n",a,res);
    return 0;
}