//write a program to check the given number is in the range of -4 to 6
#include<stdio.h>
int main()
{
    int a;
    printf("enter the number:\n");
    scanf("%d",&a);
    int lower=a>=-4;
    int upper=a<=6;
    int res=lower&&upper;
    printf(" the %d is in the range of -4 to 6 is %d",a,res);
    return 0;
}