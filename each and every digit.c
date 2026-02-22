//write a program to print each and every digit from the given number
#include<stdio.h>
int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    while(a!=0)
    {
        int dig=a%10;
        if(dig%2!=0)
        {
            printf("%d\n",dig);
        }
        a=a/10;
    }
    return 0;
}