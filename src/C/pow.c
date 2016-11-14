/* Pow
Exercise #12 from my college

Write a program to read a base and exponent and
raise this base to this exponent power.
*/
#include <stdio.h>

int main() {
  int exponent;
  double base, result;
  double Pow();

  printf("Type the base value: ");
  scanf("%lf", &base);

  printf("Type the exponent value: ");
  scanf("%d", &exponent);

  result = Pow(base, exponent);

  printf("The result is: %g\n", result);

  return 0;
}

double Pow(double value, int exponent) {
  double base = value, result;

  for (int x = 1; x < exponent; x++)
      base *= value;
  result = base;

  return result;
}
