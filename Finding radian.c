/*Finding radian by using degree */

#include <stdio.h>
#include <math.h>

int main ()
{
  float degree, radian, pi = 3.14;

  printf ("Enter the angle in degrees: ");
  scanf ("%f", &degree);

  /*pi rad= 180deg  { 1deg = pi rad / 180 } {[22/(7*180)]*deg} */
  radian = degree * pi/180;
  printf ("The radian angle is: %3.2f ", radian);
  return 0;
}
