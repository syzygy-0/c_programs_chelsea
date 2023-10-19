/* Does math on two fractions depending on the operator given */

#include <stdio.h>

int main(void)
{
  int num1, denom1, num2, denom2, result_num, result_denom, store_value;
  char operator;
  
  printf("Enter two fractions with operator between them: ");
  scanf("%d/%d%c%d/%d", &num1, &denom1, &operator, &num2, &denom2); 
    
  if (operator == '+') {
   result_num = num1 * denom2 + num2 * denom1;
   result_denom = denom1 * denom2;
  }

  if (operator == '-') {
    result_num = num1 * denom2 - num2 * denom1;
    result_denom = denom1 * denom2;
  }

  if (operator == '*') {
    result_num = num1 * num2;
    result_denom = denom1 * denom2;
  }

  if (operator == '/') {
    store_value = denom2;
    denom2 = num2;
    num2 = store_value;
    result_num = num1 * num2;
    result_denom = denom1 * denom2;
  }


  printf("The result is %d/%d\n", result_num, result_denom);

  return 0;
}
