#include <stdio.h>

int main() {
  int first_value;
  int second_value;

  printf("Type the first value: \t");
  scanf("%d", &first_value);

  printf("Type the second value: \t");
  scanf("%d", &second_value);

  printf("\nThe first value typed is %d \n", first_value);
  printf("The second value typed is %d \n", second_value);

  return 0;
}
