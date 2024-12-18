#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
  FILE* ptr;

  int bytesRead;
  unsigned char buffer[16];  // 使用 unsigned char 讀取二進位數據

  int counter = 0;

  char filename[100];

  if (argc > 1) {
    strcpy(filename, argv[1]);
  } else {
    scanf("%s", filename);
  }

  ptr = fopen(filename, "rb");

  if (ptr == NULL) {
    printf("%s not found\n", filename);
    return 1;
  }

  while ((bytesRead = fread(buffer, 1, sizeof(buffer), ptr)) > 0) {
    printf("%08X: ", counter);  // 以十六進位格式輸出偏移量

    for (int i = 0; i < bytesRead; i++) {
      printf("%02X ", buffer[i]);  // 以十六進位格式輸出每個位元組
    }

    for (int i = 0; i < 16 - bytesRead; i++) {
      printf("   ");  // 補足不足 16 個位元組的部分
    }

    for (int i = 0; i < bytesRead; i++) {
      printf("%c", isprint(buffer[i])
                       ? buffer[i]
                       : '.');  // 以 ASCII 字元格式輸出每個位元組
    }

    for (int i = 0; i < 16 - bytesRead; i++) {
      printf(" ");  // 補足不足 16 個位元組的部分
    }

    printf("\n");

    counter += bytesRead;
  }

  fclose(ptr);
  return 0;
}