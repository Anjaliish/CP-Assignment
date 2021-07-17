// Finding average marks of students//

#include <stdio.h>

int main()
{
    int i;
    float marks[5];
    float sum=0, average;
   
    for (i = 0; i < 5; i++)
    {
        printf("Please enter the marks of %d student: ", i+1);
        scanf("%f", &marks[i]);
    }
    
    for (i = 0; i < 5; i++)
    {
        printf("The marks of %d student are %4.1f\n", i+1, marks[i]);
    }
    
    for (i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }
    average  = sum / 5;
    
    printf("Average marks of the class is: %4.1f", average);

    return 0;
}


