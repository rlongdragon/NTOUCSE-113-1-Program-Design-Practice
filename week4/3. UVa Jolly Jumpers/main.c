#include <math.h>
#include <stdio.h>

int main() {
  unsigned int numberCalled[3001] = {0};
  unsigned int index = 0;
  int numberOfInputs;
  int thisRound, lastRound;
  unsigned int flag;
  unsigned int diff;

  while (scanf("%d", &numberOfInputs) != EOF) {
    flag = 0;
    for (int i = 0; i < 3001; i++) {
      numberCalled[i] = 0;
    }

    for (int i = 0; i < numberOfInputs; i++) {
      if (i == 0) {
        scanf("%d", &lastRound);
        continue;
      }

      scanf("%d", &thisRound);
      diff = fabs(thisRound - lastRound);
      if (numberCalled[diff] == 0)
        numberCalled[diff] = 1;
      else {
        flag = 1;
      }
      lastRound = thisRound;
    }

    for (int i = 1; i < numberOfInputs; i++) {
      if (numberCalled[i] == 0) {
        flag = 1;
        break;
      }
    }

    if (flag == 1) {
      printf("Not jolly\n");
    } else {
      printf("Jolly\n");
    }
  }

  return 0;
}