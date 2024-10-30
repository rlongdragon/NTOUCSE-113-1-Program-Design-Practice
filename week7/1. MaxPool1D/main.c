#include <stdio.h>

float findMax(float originalInput[50], int n, int startIndex, int endIndex) {
  startIndex = startIndex < 0 ? 0 : startIndex;
  endIndex = endIndex > n ? n : endIndex;

  float max = originalInput[startIndex];
  for (int i = startIndex; i < endIndex; i++) {
    if (originalInput[i] > max) {
      max = originalInput[i];
    }
  }
  return max;
}

int main() {
  int n, padding, poolSize, strike;
  float originalInput[50];
  int count = 0;

  scanf("%d%d%d%d", &n, &padding, &poolSize, &strike);

  for (int i = 0; i < n; i++) {
    scanf("%f", &originalInput[i]);
  }


  for (int i = -1 * padding; i < n ; i += strike) {
    printf("%3d,%8f\n", count, findMax(originalInput, n, i, i + poolSize));
    count++;
  }


  return 0;
}