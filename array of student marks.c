// Array of Marks of students//

#include <stdio.h>

int
main ()
{

  float marks[5];
  int i, sum, average;

  for (i = 1; i <= 5; i++)
    {
      printf ("Write the marks of student %d : ", i);
      scanf ("%f", &marks[i]);
    }

  for (i = 1; i <= 5; i++)
    {
      printf ("\nThe marks of the student %d is: %4.1f\n", i, marks[i]);
    }
  for (i = 1; i <= 5; i++)
    {
      sum = sum + marks[i];
    }
  average = sum / 5;
  printf ("The average marks of the students are: %d", average);


  return 0;
}

