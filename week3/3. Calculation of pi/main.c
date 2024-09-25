#include <stdio.h>

int main() {
  double E;
  int k = 0;

  while (scanf("%lf", &E) != EOF) {
    for (k = 0; 4.0 / (4 * k + 5) > E; k++) {
    }
    printf("%d\n", k);
  }
  return 0;
}