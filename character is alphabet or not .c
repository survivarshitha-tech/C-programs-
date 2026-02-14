//write a program to check the given character is alphabet or not 
#include<stdio.h>
int main()
{
    char a;
    printf("enter the alphabet:\n");
    scanf("%c",&a);
    int lower=(a>='A'&&a<='Z');
    int upper=(a>='a'&&a<='z');
    int res=lower||upper;
    printf(" the %c is the given character is alphabet %d",a,res);
    return 0;
}