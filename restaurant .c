// You and your date are trying to get a table at a restaurant. The parameter "you" is the  stylishness of your clothes in the range 0 ...10 and "date" is the stylishness of your dates clothes. The result of getting the table is encoded as an int value with 0= no, 1= maybe, 2 =yes. If either of you is very stylish, 8 or more,then the result is 2(yes), with the exception that if either of you has style of 2 or less, then the result will be 0(no). Otherwise, the result is 1(may be).
Date fashion(5,10)-2
Date fashion (5,2)-0
Date fashion (5,5)-1


#include <stdio.h>

int main()
{
    int you, date, result;

    printf("Enter your style (0-10): ");
    scanf("%d", &you);

    printf("Enter date style (0-10): ");
    scanf("%d", &date);

    if (you <= 2 || date <= 2)
        result = 0;

    else if (you >= 8 || date >= 8)
        result = 2;

    else
        result = 1;

    printf("Result = %d\n", result);

    return 0;
}