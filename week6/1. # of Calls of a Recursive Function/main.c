#include <stdio.h>

int f(int x, int *pointerOfCounter) {
  (*pointerOfCounter)++;

  if (x < 3) {
    return x;
  } else {
    return f(x - 1, pointerOfCounter) + f(x - 2, pointerOfCounter) +
           f(x - 3, pointerOfCounter) + 1;
  }
}
int main() {
  int x, ans, counter;
  while (scanf("%d", &x) != EOF) {
    if (x == 0) {
      break;
    }
    counter = 0;
    ans = f(x, &counter);

    printf("f(%d)=%d, # of calls:%d\n", x, ans, counter);
  }

  return 0;
}