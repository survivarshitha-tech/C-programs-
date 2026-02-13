//write a program to check the given character is upper case alphabet or not without ASCII value 
#include<stdio.h>
int main()
{
    char a;
    printf("enter the alphabet:\n");
    scanf("%c",&a);
    int lower=a>='A';
    int upper=a<='Z';
    int res=lower&&upper;
    printf(" the %c is the given character is upper case alphabet %d",a,res);
    return 0;
}