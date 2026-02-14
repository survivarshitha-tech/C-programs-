//write a program to check the given character is digit or not 
#include<stdio.h>
int main()
{
    char a;
    printf("enter the digit:\n");
    scanf("%c",&a);
    int lower=a>='0';
    int upper=a<='9';
    int res=lower&&upper;
    printf(" the %c is the given character is  digit %d",a,res);
    return 0;
}