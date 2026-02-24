// We want to make a package of goal kilos of chocolate.We have Small bars-1 kilo each Big bars-5 kilos each.Return the number of small bars to use, assuming we always use big bars first before small bars.Return –1 if it cannot be done.


#include <stdio.h>

int main() {

    int small, big, goal;

    printf("Enter number of small bars: ");
    scanf("%d", &small);

    printf("Enter number of big bars: ");
    scanf("%d", &big);

    printf("Enter goal kilos: ");
    scanf("%d", &goal);

    int useBig = goal / 5;

    if (useBig > big) {
        useBig = big;
    }

    int remaining = goal - (useBig * 5);

    if (remaining <= small) {
        printf("Small bars to use: %d\n", remaining);
    } else {
        printf("-1\n");
    }

    return 0;
}