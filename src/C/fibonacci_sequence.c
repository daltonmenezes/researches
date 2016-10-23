#include <stdio.h>

int main() {
  int f1 = -1, f2 = 1, counter = 0, number;

  printf("Type a number to create a Fibonacci sequence of it: ");
  scanf("%d", &number);

  printf("\n");

  while (counter <= number) {
    int f = f1 + f2;

    if (counter == number)
      printf(" %d.", f);
    else
      printf(" %d,", f);

    f1 = f2;
    f2 = f;

    counter++;
  }

  printf("\n\n");

  return 0;
}
