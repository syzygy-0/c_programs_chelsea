/* This program asks the user to enter an amount of taxable income, then
   displays the tax due based on a certain rate derived from the taxable
   income amount */

#include <stdio.h>

int main(void)
{
        float income, tax;

        printf("Enter amount of taxable income: $");
        scanf("%f", &income);

/*****************************************************************************
 * The following if statements determine the tax owed based on the income.       *
 * Income               Amount of tax                                            *
 * Under $750           1% of income                                             *
 * $750-$2250           $7.50 plus 2% of income over $750                        * 
 * $2250-3750           $37.50 plus 3% of amount over $2250                      *
 * $3750-5250           $82.50 plus 4% of amount over $3750                      *
 * $5250-7000           $142.50 plus 5% of amount over $5250                     *
 * Over $7000           $230.00 plus 6% of amount over $7000                     *
 *****************************************************************************/

        if (income < 750)
                tax = .01f;
        else if (income >= 750 && income <= 2250)
                tax = (7.5 + (income * .02f));
        else if (income >= 2250 && income <= 3750)
                tax = (37.5 + (income * .03f));
        else if (income >= 3750 && income <= 5250)
                tax = (82.5 + (income * .04f));
        else if (income >= 5250 && income <= 7000)
                tax = (142.5 + (income * .05f));
        else
                tax = 230 + (income * .06);

        printf("The tax due is $%.2f\n", tax);

        return 0;
}
