#include <stdio.h>

int
main ()
	   //convert centigrade into fahrenheit//
{
  float deg, fahren;
  printf ("Enter the temperature in degree: ");
  scanf ("%f", &deg);

  fahren = deg * (9.0 / 5.0) + 32;
  printf ("The %f deg centigrade is equal to %f deg", deg, fahren);

  return 0;
}
