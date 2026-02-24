//We are having a party with amounts of tea and candy. Return the int outcome of the party encoded as 0 = bad, 1 = good, or 2 = great. A party is good(1) If both tea and candy are at least 5. However, if either tea or candy is at least double the amount of the other one, the party is great.However, in all cases, if either tea or candy is less than 5, the party is always bad (0).


#include<stdio.h>
int main() 
{
     int tea, candy,result;
     printf("Enter amount of tea: ");
    scanf("%d", &tea);
      printf("Enter amount of candy: ");
    scanf("%d", &candy);
     if (tea < 5 || candy < 5)
      result=0;
      else if (tea >= 2 * candy || candy >= 2 * tea)
        result=2;
        else
         result=1;
    printf("Party result: %d\n", result);
    return 0;
}