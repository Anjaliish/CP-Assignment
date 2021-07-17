#include <stdio.h>

int
main ()
{			

  int a[10];
  int i;
  printf( "\t******** This program will reverse your given numbers ********\n");
   printf("Enter 10 numbers: \n");
   for (i = 0; i < 10; i++)
    {
      scanf("%d", &a[i]);
    }
   
  
  printf("\n");
  // original order//
  
  for (i = 0; i < 10; i++)
    {
      printf ("\t %d", a[i]);
    }

printf("\n");
  // reverse order// 

  for (i = 9; i >= 0; i--)
    {
      printf ("\t %d", a[i]);
    }

  return 0;
}

