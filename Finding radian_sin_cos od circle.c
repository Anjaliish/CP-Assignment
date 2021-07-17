//Find radian, sin , cos of circle//

#include <stdio.h>
#include <math.h>

int main()
{
    float degree, radian;
    
    printf("Please enter the angle in degrees: ");
    scanf("%f", &degree);
    /*  M_PI */
    /*   Pi rad =  180 deg   1 deg = Pi/180 rad  (22/(7x 180)) * deg */ 
    radian = degree *(M_PI/180.0); 
    printf("The angle in radians is : %f\n", radian);
    printf("The Sine value of angle is : %f\n", sin(radian));
    printf("The Cosine value of angle is: %f", cos(radian));
    return 0;
}
