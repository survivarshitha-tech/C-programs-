//write a program to check the given number is factor of 10
#include<stdio.h>
int main()
{
    int a;
    printf("enter the number:\n");
    scanf("%d",&a);
    int res=(a%10==0);
    printf("%d is a factor of 10 is %d\n",a,res);
    return 0;
}