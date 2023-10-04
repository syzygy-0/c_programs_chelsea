/*Enter a dollar amount and this program will show you how to pay that amount using the
 *smallest number of $20, $10, $5, and $1 bills*/

#include <stdio.h>

int main(void)
{
        int amount, bill20, bill10, bill5, bill1;

        printf("Enter a dollar amount: ");
        scanf("%d", &amount);

        bill20 = amount / 20;
        amount = amount - (20 * bill20);
        bill10 = amount / 10;
        amount = amount - (10 * bill10);
        bill5 = amount / 5;
        amount = amount - (5 * bill5);
        bill1 = amount / 1;

        printf("The bills you need are:\n");
        printf("$20 bills; %d\n", bill20);
        printf("$10 bills: %d\n", bill10);
        printf("$5 bills: %d\n", bill5);
        printf("$1 bills: %d\n", bill1);

        return 0;
}
