#include <math.h>
#include <stdio.h>

int main() {
  int k;
  double x;
  double ans = 0;
  int i;

  while (scanf("%d%lf", &k, &x) != EOF) {
    for (i = 0; i < k + 1; i++) {
      ans += (pow(-1, i) * pow(x, 1 + 2 * i)) / (1 + 2 * i);
    }

    printf("%.5lf\n", ans);
    ans = 0;
  }

  return 0;
}