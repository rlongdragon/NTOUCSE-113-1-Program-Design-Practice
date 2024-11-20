#include <stdio.h>

int main() {
  int cases = 0;

  scanf("%d", &cases);

  for (int i = 0; i < cases; i++) {
    int w = 0;
    scanf("%d", &w);

    float matrix[w][w];

    for (int j = 0; j < w; j++) { 
      for (int k = 0; k< w; k++) {
        scanf("%f", &matrix[j][k]);
      }
    }

    for (int j = 0; j < w; j++) {
      printf("%.2f", matrix[0][j]);
      for (int k = 1; k < w; k++) {
        printf(",%.2f", matrix[k][j]);
      }
      printf("\n");
    }
  }

  return 0;
}
