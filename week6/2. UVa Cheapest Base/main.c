#include <stdio.h>

int totalCost(int costOfChar[], int num, int base) {
  int cost = 0;
  while (num > 0) {
    cost += costOfChar[num % base];
    num /= base;
  }
  return cost;
}

int minOfArray(int arr[], int size) {
  int min = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}

int main() {
  int numOfCase;
  int numOfRequest;
  int num;
  int costOfChar[36] = {0};  // 不同字元列印的成本
  int costs[34] = {0};  // 不同進位下列印的總成本 index 0 - 34 => 2 - 36
  int minCost = 0;

  scanf("%d", &numOfCase);
  for (int i = 0; i < numOfCase; i++) {
    // init
    for (int j = 0; j < 36; j++) {
      costOfChar[j] = 0;
    }
    if (i != 0) {
      printf("\n");
    }


    // 取得不同字元列印的成本
    for (int j = 0; j < 36; j++) {
      scanf("%d", &costOfChar[j]);
    }

    scanf("%d", &numOfRequest);
    printf("Case %d:\n", i + 1);
    for (int j = 0; j < numOfRequest; j++) {  // init
      minCost = 0;
      for (int k = 0; k < 34; k++) {
        costs[k] = 0;
      }

      scanf("%d", &num);

      // 計算在不同進位下的列印總成本
      for (int j = 0; j < 35; j++) {
        costs[j] = totalCost(costOfChar, num, j + 2);
      }

      minCost = minOfArray(costs, 34);
      printf("Cheapest base(s) for number %d:", num);
      for (int j = 0; j < 35; j++) {
        if (costs[j] == minCost) {
          printf(" %d", j + 2);
        }
      }
      printf("\n");
    }
  }

  return 0;
}