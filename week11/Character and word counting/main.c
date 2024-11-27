#include <stdio.h>

int main() {
  int total = 0;
  int specialTotal = 0;
  char set[] = {',', '.', '\'', '"', '?', '!', '(',
                ')', '{', '}',  '[', ']', ';', ':'};
  int words = 0;
  int lastIsLetter = 0;
  int thisIsLetter = 0;
  char c;

  while (scanf("%c", &c) != EOF) {
    // Q1
    total++;

    // Q2
    for (int i = 0; i < 14; i++) {
      if (c == set[i]) {
        specialTotal++;
        break;
      }
    }

    // Q3
    if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) {
      thisIsLetter = 1;
    } else {
      thisIsLetter = 0;
    }

    if (lastIsLetter == 1 && thisIsLetter == 0) {
      words++;
    }

    lastIsLetter = thisIsLetter;
  }
  
  if (lastIsLetter) {
    words++;
  }

  printf("%d\n", total);
  printf("%d\n", specialTotal);
  printf("%d\n", words);
}
