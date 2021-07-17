// Area of Rectriangle//
#include <stdio.h>

int
main ()
{
  int length, breadth;

  int area = length * breadth;

  printf ("Enter the length of the rectriangle\n");
  scanf ("%d", &length);

  printf ("Enter the breadth of the rectriangle\n");
  scanf ("%d", &breadth);

  printf ("The area of your rectriangle is %d", length * breadth);

  return 0;
}


