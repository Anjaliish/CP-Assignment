//Finding Compund intrest//

#include <stdio.h>
#include <math.h>

int main()
{
    float amount, rate, time,CI;
    
    printf("Enter the principal amount:");
    scanf("%f", &amount);
    
    printf("Enter the rate of intrest:");
    scanf("%f",&rate);
    
    printf("Enter the number of years:");
    scanf("%f",&time);
    
    CI = amount*(pow ((1 + rate / 100),time));
    
    printf("Here is the Compount Intrest CI: %f ", CI);
    
    
    return 0;
  
}
