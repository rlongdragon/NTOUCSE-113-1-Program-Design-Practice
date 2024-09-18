#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2;

  // get two integer numbers
  scanf("%d %d", &num1, &num2);

  // sum of two integer numbers
  printf("sum:%d\n", num1 + num2);

  // product of two integer number
  printf("product:%d\n", num1 * num2);

  // difference between two integer numbers
  printf("difference:%d\n", abs(num1 - num2));

  if (num2 == 0) { // the divisor can't be 0
    printf("quotient:invalid\n");
    printf("remainder:invalid\n");
  } else {
    // quotient of num1 / num2
    printf("quotient:%d\n", num1 / num2);

    // remainder of num1 % num2
    printf("remainder:%d\n", num1 % num2);
  }

  return 0;
}