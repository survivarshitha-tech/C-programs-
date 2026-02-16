//write a program to display login page by accepting user id and password from the users,check whwether given user id and password matches or not 
#include<stdio.h>
int main()
{
    int id=7963;
    int pwd=5321;
    int uid;
    int upwd;
    printf("enetr the user id\n");
    scanf("%d",&uid);
    printf("enetr the password\n");
     scanf("%d",&upwd);
     if(uid==id)
     {
         if(pwd==upwd)
         {
             printf("login successfull");
         }
         else
         {
             printf("incorrect password ");
         }
     }
         else
         {
               printf("user doesn't exists\n ");
         }
}