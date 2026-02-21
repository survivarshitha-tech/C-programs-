// The squirrels in Polo Alto spend most of the day playing. In particular, they play in the temperature is  between 60 and 90(inclusive) . unless it is summer, then the upper limit is 100 instead of 90.Given an int temperature and a Boolean is summer, return true if the squirrels play and false otherwise.
Squirrel play (70, false)- true
Squirrel play (95, false)- false
Squirrel play (95, true)- true



#include <stdio.h>
int main() {
    int temp, summer;
    printf("Enter the temperature:");
    scanf("%d",&temp);
    printf("Enter 1 for summer \t 0 for not summer:");
    scanf("%d",&summer);
    if(summer)
    {
        if(temp>=60&&temp<=100)
        {
            printf("true");
        }
        else
        {
            printf("flase");
        }
    }
    else
    {
        if(temp>=40 && temp<=90)
        {
            printf("true");
        }
        else
        {
            printf("flase");
        }
    }
    return 0;
}