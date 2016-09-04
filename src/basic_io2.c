/*
Exercise #2 from my college

Make a program to read and write on console the following data:
1.Name; 2.Address; 3.City; 4.Zip code; 5. Phone number;
*/
#include <stdio.h>

int main() {
  char first_name[20];
  char address[100];
  char city[20];
  int zip_code;
  int phone_number;

  printf("Type your first name: ");
  scanf("%s", first_name);

  printf("Type your address: ");
  scanf(" %[^\n]", address);

  printf("Type your city: ");
  scanf(" %[^\n]", city);

  printf("Type your zip code: ");
  scanf("%d", &zip_code);

  printf("Type your phone number: ");
  scanf ("%d", &phone_number);

  printf("\nName: %s\nAddress: %s\nCity: %s\nZip code: %d\nPhone Number: %d\n", first_name, address, city, zip_code, phone_number);

  return 0;
}
