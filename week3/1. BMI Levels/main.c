#include <stdio.h>

int main() {
  float weight, height, BMI;

  while (scanf("%f%f", &weight, &height) != EOF) {
    // calculate BMI
    BMI = weight / (height * height / 10000);

    // output BMI and weight category using the if-elseif statement
    if (BMI < 18.5) {
      printf("BMI:%.2f Category:underweight\n", BMI);
    } else if (BMI < 24) {
      printf("BMI:%.2f Category:normal\n", BMI);
    } else if (BMI < 27) {
      printf("BMI:%.2f Category:overweight\n", BMI);
    } else if (BMI < 30) {
      printf("BMI:%.2f Category:obese class I\n", BMI);
    } else if (BMI < 35) {
      printf("BMI:%.2f Category:obese class II\n", BMI);
    } else {
      printf("BMI:%.2f Category:obese class III\n", BMI);
    }
  }
  return 0;
}