// Input and Output in C
#include "stdio.h"
// Variable/Constants declaration
char gender;
float gpa;
unsigned int studentId;
double distance;

// Functions/Methods
int main()
{
  // input student ID
  printf("Enter your student ID: ");
  scanf("%u", &studentId);
  // input gender
  printf("Enter your gender (M/F): ");
  scanf(" %c", &gender);
  // input GPA
  printf("Enter your GPA: ");
  scanf("%f", &gpa);
  // input distance to school
  printf("Enter your distance to school (km): ");
  scanf("%lf", &distance);

  // Display results
  printf("--- Student Profile ---\n");
  printf("Student ID: %u\n", studentId);
  printf("gender: %c\n", gender);
  printf("GPA: %.2f\n", gpa);
  printf("Distance: %.3f", distance);

  // Display the formatted table
  printf("\n--- Student Profile ---\n");
  printf("ID\tGender\tGPA\tDistance\n");
  printf("%u\t%c\t%.2f\t%.3f", studentId, gender, gpa, distance);

  return 0;
}