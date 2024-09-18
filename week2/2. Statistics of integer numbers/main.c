#include <stdio.h>

int main() {
  int x;
  int index = 0;
  int sumOfNum = 0;
  int minNum, minNumIndex;
  int maxNum, maxNumIndex;

  while (scanf("%d", &x) != EOF) {  // scan until EOF
    sumOfNum += x;

    if (index == 0) {
      // set min num
      minNum = x;
      minNumIndex = index;

      // set max num
      maxNum = x;
      maxNumIndex = index;
    } else {
      if (minNum >= x) {  // last min num
        minNum = x;
        minNumIndex = index;
      }

      if (maxNum < x) {  // first max num
        maxNum = x;
        maxNumIndex = index;
      }
    }
    index++;
  }

  printf("number:%d\n", index);
  printf("sum:%d\n", sumOfNum);
  printf("the index of the smallest number:%d\n", minNumIndex);
  printf("the value of the smallest number:%d\n", minNum);
  printf("the index of the largest number:%d\n", maxNumIndex);
  printf("the value of the largest number:%d\n", maxNum);

  return 0;
}