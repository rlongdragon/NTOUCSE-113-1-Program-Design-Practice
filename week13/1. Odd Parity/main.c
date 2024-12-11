#include <stdio.h>

int main() {
  int num = 0;
  int isOdd = 0;

  while (scanf("%d", &num) != EOF) {
    isOdd = 0;
    while (num > 0) {
      if (num % 2 == 1) {
        isOdd = !isOdd;
      }
      num /= 2;
    }

    if (isOdd == 1) {
      printf("correct\n");
    } else {
      printf("erroneous\n");
    }
  }

  return 0;
}