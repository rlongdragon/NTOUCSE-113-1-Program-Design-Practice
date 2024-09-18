#include <stdio.h>
#include <math.h>

int main() {
  float u, v, a, b, c;
  float distance;

  scanf("%f %f %f %f %f", &u, &v, &a, &b, &c);

  distance = fabs(a*u+b*v+c)/sqrt(a*a+b*b);

  printf("%.2f\n", distance);

  return 0;
}