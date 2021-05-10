#include <stdio.h>
#include <math.h>

int main() {
  float x, d, y;

    printf("Введіть два числа:\n");

  printf("\nВведіть число x: ");
  scanf("%f", &x);

  printf("Введіть число y: ");
  scanf("%f", &y);

  d = pow (x,2) + (2*x - 10) / (y + 2);

  printf("\n-_-_-_-Результати-_-_-_-\n");
  printf("Відповідь: ");
  printf("d = %.2f", d);
  printf("\n-_-_-_-_-_-_-_-_-_-_-_-_\n");

  return 0;
}
