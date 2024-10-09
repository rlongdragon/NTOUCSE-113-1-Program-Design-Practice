#include <math.h>
#include <stdio.h>

int main() {
  double x, h;
  double s = 0;
  int i;
  while (scanf("%lf", &x) != EOF) {
    printf("%-9s %-9s %-16s %-16s %-16s\n", "    x", "    h", "    cos'(x)",
           "       ND", "     Error");
    printf("%-9s %-9s %-16s %-16s %-16s\n", "---------", "---------",
           "----------------", "----------------", "----------------");

    for (i = 0; i < 8; i++) {
      h = pow(10, -i);
      printf("%9f %.7f %16.6e %16.6e %16.6e\n", x, h, -sin(x),
             (cos(x + h) - cos(x)) / h,
             fabs(((cos(x + h) - cos(x)) / h) - (-sin(x))));
    }
  }

  return 0;
}