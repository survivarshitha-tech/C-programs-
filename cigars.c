// When squirrels get together for a party, they like to have cigars. A squirrel party is successful when the number of cigars is between 40 and 60, inclusive , unless it is the weekend, in which case there is no upper bound on the number of cigars. Return true if the party with the given values is successful or false otherwise.
Cigar party(30,false)-false 
Cigar party(50,false)-true 
Cigar part(70,true)-true


#include <stdio.h>
int main() {
    int cigars,weekend;
    printf("Enter the No of cigars:");
    scanf("%d",&cigars);
    printf("Enter 1 for weakend \t 0 for not weekend:");
    scanf("%d",&weekend);
    if(weekend)
    {
        if(cigars>=40)
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
        if(cigars>=40 && cigars<=60)
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