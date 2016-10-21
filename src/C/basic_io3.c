/*
Exercise #3 from my college

Make a program to receive and show
the following data about 2 students:
1.Name; 2.Age; 3.Exam grade;
*/
#include <stdio.h>

int main() {
  char student_name1[50];
  char student_name2[50];

  int student_age1;
  int student_age2;

  float student_exam_grade1;
  float student_exam_grade2;

  void horizontalRule(void);

  // INPUTS OF THE FIRST STUDENT
  printf("Type the name of the first student: ");
  scanf(" %[^\n]", student_name1);

  printf("Type the age of the first student: ");
  scanf("%d", &student_age1);

  printf("Type the exam grade of the first student: ");
  scanf("%f", &student_exam_grade1);

  // INPUTS OF THE SECOND STUDENT
  printf("\nType the name of the second student: ");
  scanf(" %[^\n]", student_name2);

  printf("Type the age of the second student: ");
  scanf("%d", &student_age2);

  printf("Type the exam grade of the second student: ");
  scanf("%f", &student_exam_grade2);

  // STUDENTS OUTPUT INFORMATION
  horizontalRule();
  printf("\n\t\tSTUDENTS INFORMATION");

  horizontalRule();
  printf("\nFIRST STUDENT\nName: %s\nAge: %d\nExam grade: %.2f", student_name1, student_age1, student_exam_grade1);

  horizontalRule();
  printf("\nSECOND STUDENT\nName: %s\nAge: %d\nExam grade: %.2f\n", student_name2, student_age2, student_exam_grade2);

  return 0;
}

void horizontalRule(void) {
  printf("\n--------------------------------------------------");
}
