#include <stdio.h>
#include <string.h>

char* morse(char c) {
  const char* morseCode[36][1] = { // A-Z 0-9
      {".-"},    {"-..."},  {"-.-."},  {"-.."},   {"."},     {"..-."},
      {"--."},   {"...."},  {".."},    {".---"},  {"-.-"},   {".-.."},
      {"--"},    {"-."},    {"---"},   {".--."},  {"--.-"},  {".-."},
      {"..."},   {"-"},     {"..-"},   {"...-"},  {".--"},   {"-..-"},
      {"-.--"},  {"--.."},  {"-----"}, {".----"}, {"..---"}, {"...--"},
      {"....-"}, {"....."}, {"-...."}, {"--..."}, {"---.."}, {"----."},
  };
  
  if (c == ' ') {
    return "     ";
  }
  if (c >= 'A' && c <= 'Z') {
    return morseCode[c - 'A'][0];
  } else if (c >= '0' && c <= '9') {
    return morseCode[c - '0' + 26][0];
  } else {
    return NULL;
  }
}

int main() {
  char c;
  int firstLoop = 1;
  while (scanf("%c", &c) != EOF) {
    char* code = morse(c);
    if (code == NULL) {
      continue;
    }
    if (firstLoop) {
      printf("%s", code);
      firstLoop = 0;
    } else {
      printf(" %s", code);
    }
  }
  printf("\n");
  return 0;
}