#include <math.h>
#include <stdio.h>

int main() {
  int t;
  double x;
  double ans = 0;
  int k;

  while (scanf("%d%lf", &t, &x) != EOF) {
    for (k = 0; k < t + 1; k++) {
      ans += (pow(-1, k) * pow(x, 1 + 2 * k)) / (1 + 2 * k);
    }

    printf("%.5lf\n", ans);
    ans = 0;
  }

  return 0;
}
