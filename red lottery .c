//you have a red lottery ticket showing ints a,b,c each of which is 0,1or2.if they are all the the value 2,the result is 10. otherwise if they are all the same , the result is 5.otherwise so long as both b and c are different from a,the result is 1.otherwise the result is 0
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value in a:");
    scanf("%d",&a);
     printf("enter the value in b:");
    scanf("%d",&b);
     printf("enter the value in c:");
    scanf("%d",&c);
    if (a==2 && b==2 && c==2)
    {
        printf("10");
    }
    else if (a==b && b==c && c==a)
    {
        printf("5");
    }
    else if (b!=a && c!=a)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
    }