#include <stdio.h>

int main()
{
       int array[100] = {64,47,78,76,94,50,63,23,98,97,15,26};
   int i, larg, secL;

   if(array[0] > array[1]) {
      larg = array[0];
      secL  = array[1];
   } else {
      larg = array[1];
      secL = array[0];
   }

   for( i = 1; i < 100; i++) {
      if( larg < array[i] ) {
         secL= larg;
         larg = array[i];
      } else if( secL < array[i] ) {
         secL =  array[i];
      }
   }
printf("Second-%d", secL);   

    return 0;
}

