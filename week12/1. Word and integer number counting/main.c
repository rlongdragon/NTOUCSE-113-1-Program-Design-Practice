#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define isEOS(x) (x == -1 || x == '\0')

void add_word(char* word, char word_array[][61], int n_word) {
  strcpy(word_array[n_word], word);
}

int main() {
  int ch;
  int state = 0;
  int n_number = 0;
  int n_word = 0, n_diff_word = 0;
  int wid, i, j;
  char aword[61];
  char word_array[500][61];

  while (state != 4) {
    ch = getchar();
    if (ch == EOF) {
      ch = -1;
    }
    
    switch (state) {
      case 0:
        if (isalpha(ch)) {
          state = 1;
          aword[wid] = ch;
          wid = 1;
        } else if (isdigit(ch)) {
          state = 2;
        } else if (isEOS(ch)) {
          state = 4;
        } else {  // others
          state = 3;
        }
        break;

      case 1:
        if (isalpha(ch)) {
          state = 1;
          aword[wid] = ch;
          wid++;
        } else if (isdigit(ch)) {
          state = 2;
          aword[wid] = '\0';
          add_word(aword, word_array, n_word);
          wid = 0;
          n_word++;
        } else if (isEOS(ch)) {
          aword[wid] = '\0';
          add_word(aword, word_array, n_word);
          wid = 0;
          n_word++;
          state = 4;
        } else {  // others
          state = 3;
          aword[wid] = '\0';
          add_word(aword, word_array, n_word);
          wid = 0;
          n_word++;
        }
        break;

      case 2:
        if (isalpha(ch)) {
          state = 1;
          aword[wid] = ch;
          wid = 1;
          n_number++;
        } else if (isdigit(ch)) {
          state = 2;
        } else if (isEOS(ch)) {
          state = 4;
          n_number++;
        } else {  // others
          state = 3;
          n_number++;
        }
        break;

      case 3:
        if (isalpha(ch)) {
          state = 1;
          aword[wid] = ch;
          wid = 1;
        } else if (isdigit(ch)) {
          state = 2;
        } else if (isEOS(ch)) {
          state = 4;
        } else {  // others
          state = 3;
        }
        break;

      case 4:
        break;
    }
  }
  printf("%d\n", n_word);
  printf("%d\n", n_number);

  for (i = 0, n_diff_word = 0; i < n_word; ++i) {
    for (j = i + 1; j < n_word; ++j) {
      if (strcmp(word_array[i], word_array[j]) == 0) {
        for(int k = j; k < n_word - 1; k++) {
          strcpy(word_array[k], word_array[k + 1]);
        }
        n_word--;
        j--;
      } 
    }
  }
  printf("%d\n", n_word);

  return 0;
}