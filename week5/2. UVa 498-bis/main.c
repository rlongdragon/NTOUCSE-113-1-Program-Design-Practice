// #include <math.h>
#include <stdio.h>

long long int LLpow (int a, int n) {
  long long int ans = 1;
  for (int i = 0; i < n; i++) {
    ans *= a;
  }
  return ans;
}

long long dpoly(int a[], int n, int x) {
  long long int ans = 0;
  for (int i = n; i > 0; i--) {
    ans += a[n - i] * i * LLpow(x, i - 1);
  }
  return ans;
}

int main() {
  long long int ans = 0;
  int x;
  int a[1000];
  int n = 0;
  char c;

  while (scanf("%d", &x) != EOF) {
    n = 0;
    c = ' ';

    while ((c != '\r') && (scanf("%d%c", a + n, &c) != EOF)) {
      // if (scanf("%d%c", a + n, &c) == EOF) {
      //   break;
      // }
      n++;
    }

    ans = dpoly(a, n - 1, x);
    printf("%lld\n", ans);
  }
  return 0;
}

