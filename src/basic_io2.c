#include <stdio.h>

/*
Exercise #2 from my college

Make a program to read and write on console the following data:
1.Name; 2.Adress; 3.City; 4.Zip code; 5. Phone number;

*/

int main() {
  char first_name[20];
  char adress[100];
  char city[20];
  int zip_code;
  int phone_number;

  printf("Type your first name: ");
  scanf("%s", first_name);

  printf("Type your adress: ");
  scanf(" %[^\n]", adress);

  printf("Type your city: ");
  scanf(" %[^\n]", city);

  printf("Type your zip code: ");
  scanf("%d", &zip_code);

  printf("Type your phone number: ");
  scanf ("%d", &phone_number);

  printf("\nName: %s\nAdress: %s\nCity: %s\nZip code: %d\nPhone Number: %d\n", first_name, adress, city, zip_code, phone_number);

  return 0;
}
