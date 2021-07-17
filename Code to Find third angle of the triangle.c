/* Finding third angle of the triangle*/

#include <stdio.h>

int
main ()
{
  int a1, a2, a3;
  printf ("Enter both the angle of the triangle : ");
  scanf ("%d %d", &a1, &a2);

  // sum of all the angles of the triangle is 180deg//

  a3 = ( 180 - (a1 + a2));

  printf ("The  value of third angle is : %d", a3);

  return 0;
}
