// Find Eligibility of the candidate through marks//

#include <stdio.h>

int
main ()
{
  int phy, chem, math, total;
  printf ("Enter the marks in maths : ");
  scanf ("%d", &math);

  printf ("\nEnter the marks in Physics: ");
  scanf ("%d", &phy);

  printf ("\nEnter the marks in Chemistry: ");
  scanf ("%d", &chem);

  total = chem + phy + math;

  printf ("\nThe total marks obtained: %d \n ", total);

  if (math >= 65 && phy >= 55 && chem >= 50 && total >= 190)
    {
      printf ("The candidate is eligible for admission");
    }
  else
    {
      printf ("The candidate is not eligible for admission");
    }

  return 0;
}

