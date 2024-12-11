#include <stdio.h>

struct card {
  char face, suit;
};

struct card input_card() {
  struct card c;
  scanf(" %c", &c.face);
  if (c.face == '1') {
    scanf("%c", &c.face);
    c.face = 'T';
  }
  scanf("%c", &c.suit);
  return c;
}

int indexOf(char c, char *arr, int n) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == c) {
      return i;
    }
  }
  return -1;
}

int higher(struct card A, struct card B) {
  char face[] = "23456789TJQKA";
  char suit[] = "SDHC";

  int indexA = indexOf(A.face, face, 13);
  int indexB = indexOf(B.face, face, 13);

  if (indexA > indexB) {
    return 0;
  } else if (indexA < indexB) {
    return 1;
  }

  indexA = indexOf(A.suit, suit, 4);
  indexB = indexOf(B.suit, suit, 4);
  
  if (indexA > indexB) {
    return 0;
  } else if (indexA < indexB) {
    return 1;
  } else {
    return -1;
  }
}

int main() {
  int cases;
  scanf("%d", &cases);

  for (int i = 0; i < cases; i++) {
    printf("%d\n", higher(input_card(), input_card()));
  }

  return 0;
}