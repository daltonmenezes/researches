/* Pyramid of numbers
Exercise #7 from my college

Make a program that's receive a number and print it like a pyramid in ascending order.
Example with number 5 inputted. The output must be like that:

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include <stdio.h>

int main() {
  int number;

  printf("Type a number: ");
  scanf("%d", &number);

  for (int i = 1; i <= number; i++) {

       for (int j = 1; j <= i; j++) {
            printf ("%d ", j);
       }

       printf ("\n");
  }

  return 0;
}
