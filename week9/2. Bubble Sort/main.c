#include <stdio.h>

int main() {
  int n[1000] = {0};

  int times;
  scanf("%d", &times);

  for (int i = 0; i < times; i++) {
    scanf("%d", &n[i]);
  }

  // bs
  int countOfSwitch = 0;
  for (int i = 0; i < times; i++) {
    for (int j = i; j < times; j++) {
      if (n[i] > n[j]) {
        int temp = n[i];
        n[i] = n[j];
        n[j] = temp;
        countOfSwitch++;
      }
    }
  }

  printf("%d\n", countOfSwitch);

  for (int i = 0; i < times; i++) {
    printf("%d\n", n[i]);
  }

  return 0;
}