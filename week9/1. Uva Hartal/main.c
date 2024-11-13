#include <stdio.h>

int main() {
  int T;  // number of cases

  scanf("%d", &T);

  for (int t = 0; t < T; t++) {
    int N;  // run N days

    scanf("%d", &N);

    int P;

    scanf("%d", &P);

    int days[3650] = {0};

    for (int p = 0; p < P; p++) {
      int time;

      scanf("%d", &time);

      int day = time - 1;
      while (day < N) {
        days[day] = 1;
        day += time;
      }
    }

    int day = 5;
    while (day < N) {
      days[day] = 0;
      days[day + 1] = 0;
      day += 7;
    }

    int lost = 0;
    for (int i = 0; i < N; i++) {
      if (days[i] == 1) {
        lost++;
      }
    }

    printf("%d\n", lost);
  }
  return 0;
}