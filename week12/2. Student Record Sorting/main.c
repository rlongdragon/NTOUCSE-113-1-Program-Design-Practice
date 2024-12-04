#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXSIZE 100

struct studentRecord {
  char name[10];
  char id[10];
  int age;
  char email[100];
};

void inputStudentRecord(struct studentRecord* data) {
  scanf("%s%s%d%s", data->name, data->id, &data->age, data->email);
}

void outputStudentRecord(const struct studentRecord* data) {
  printf("%s %s %d %s\n", data->name, data->id, data->age, data->email);
}

int compare(const struct studentRecord* a, const struct studentRecord* b) {
  /*
  PAWang A123 10 a@email.ntou.edu.tw
  QALee LA23 14 c@email.ntou.edu.tw
  CAChang B323 12 d@email.ntou.edu.tw
  PAChen A023 19 f@email.ntou.edu.tw
  QALiu A223 11 g@email.ntou.edu.tw
  */

  // compare name
  // for (int i = 0; i < 10; i++) {
  //   if ((a->name)[i] > (b->name)[i]) {
  //     return 1;
  //   } else if ((a->name)[i] < (b->name)[i]) {
  //     return -1;
  //   }

  //   if ((a->name)[i] == '\0' && (b->name)[i] == '\0') {
  //     break;
  //   }
  // }

  // compare id
  for (int i = 0; i < 10; i++) {
    if ((a->id)[i] > (b->id)[i]) {
      return 1;
    } else if ((a->id)[i] < (b->id)[i]) {
      return -1;
    }

    if ((a->id)[i] == '\0' && (b->id)[i] == '\0') {
      break;
    }
  }

  // compare age
  // if (a->age > b->age) {
  //   return 1;
  // } else if (a->age < b->age) {
  //   return -1;
  // }

  // compare email
  // for (int i = 0; i < 10; i++) {
  //   if ((a->email)[i] > (b->email)[i]) {
  //     return 1;
  //   } else if ((a->email)[i] < (b->email)[i]) {
  //     return -1;
  //   }

  //   if ((a->email)[i] == '\0' && (b->email)[i] == '\0') {
  //     break;
  //   }
  // }

  return 0;
}


int main(void) {
  int n, i;
  struct studentRecord students[MAXSIZE];
  scanf("%d", &n);
  for (i = 0; i < n; ++i) {
    inputStudentRecord(students + i);  //&students[i]
  }

  qsort(students, n, sizeof(struct studentRecord), compare);
  
  for (i = 0; i < n; ++i) {
    outputStudentRecord(students + i);
  }
  return 0;
}
