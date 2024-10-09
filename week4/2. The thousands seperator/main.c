#include <math.h>
#include <stdio.h>

int main() {
  unsigned int n, temp;
  int numberOfDigits;
  int i;

  while (scanf("%d", &n) != EOF) {
    if (n == 0) {
      printf("0\n");
      continue;
    }

    temp = n;
    // get digits of number
    for (numberOfDigits = 0; temp > 0; numberOfDigits++, temp /= 10) {
    }

    for (i = numberOfDigits; i > 0; i--) {
      // get digit by index+1
      temp = n;
      temp /= pow(10, i - 1);

      if (i % 3 == 0 && i != numberOfDigits) {
        printf(",");                  
      }

      printf("%d", temp % 10);
    }
    printf("\n");
  }

  return 0;
}