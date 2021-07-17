/* Trignometric Angle table*/
# include <stdio.h>
# include <math.h> 
void main() 
{ 
 float r ; 
 int i ; 
 printf("\t_____________________________________________") ; 
 printf("\n \t Angle \t  Sin \t  Cos \t  Tan \n") ; 
 printf("\t_____________________________________________") ; 
 for(i = 0 ; i <= 180 ; i = i + 30) 
 { 
  r = (i * M_PI) / 180 ; 
  printf("\n\t %d \t %f \t %f \t %f\n", 
   i, sin(r), cos(r), tan(r)); 
 } 
 printf("\t______________________________________________") ; 
} 
  
 return 0 ;
}
