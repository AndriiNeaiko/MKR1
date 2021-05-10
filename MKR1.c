#include <stdio.h>
#include <math.h>


int main() {
  float x, y, a;
  printf("\nВведіть значення нижньої границі інтервалу: ");
  scanf("%f", &x);
  printf("Введіть значення верхньої границі інтервалу: ");
  scanf("%f", &y);
  printf("Введіть значення a: ");
  scanf("%f", &a);

  if (y<x) {
    printf("\nВи ввели некоректні дані (нижня границя більша за верхню)\n");
  }
  else {

    int n=0;
    for (float i=x; i<=y; i++) {
      if (a == i) {
        n = 1;
        break;
      }
    }
    if (n==1) {
      printf("Число %.2f входить в інтервал [%.2f, %.2f]", a, x, y);
    }
    else {
      printf("Число %.2f не входить в інтервал [%.2f, %.2f]", a, x, y);
    }
  }
  return 0;
}
