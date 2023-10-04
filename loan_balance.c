/*Calculates the remaining balance on a loan after the first, second, and third monthly
  payments*/

#include <stdio.h>
#include <math.h>

int main(void)
{
        float loan_amount, interest_rate, monthly_payment, monthly_interest;

        printf("Enter amount of loan; ");
        scanf("%f", &loan_amount);
        printf("Enter interest rate: ");
        scanf("%f", &interest_rate);
        printf("Enter monthly payment: ");
        scanf("%f", &monthly_payment);

        monthly_interest = (interest_rate / 100) / 12;

        float month1 = loan_amount - monthly_payment;
        month1 = roundf(month1 * 100) / 100;
        float month1_interest = month1 * monthly_interest;
        month1_interest = roundf(month1_interest * 100) / 100;
        month1 = month1 + month1_interest;
        month1 = roundf(month1 * 100) / 100;

        float month2 = month1  - monthly_payment;
        month2 = roundf(month2 * 100) / 100;
        float month2_interest = month2 * monthly_interest;
        month2_interest = roundf(month2_interest *100) / 100;
        month2 = month2 + month2_interest;
        month2 = roundf(month2 * 100) / 100;

        float month3 = month2 - monthly_payment;
        month3 = roundf(month3 * 100) / 100;
        float month3_interest = month3 * monthly_interest;
        month3_interest = roundf(month3_interest * 100) / 100;
        month3 = month3 + month3_interest;
        month3 = roundf(month3 * 100) / 100;

        printf("Balance remaining after first payment: %.2f\n", month1);
        printf("Balance remaining after first payment: %.2f\n", month2);
        printf("Balance remaining after first payment: %.2f\n", month3);

        return 0;
}
