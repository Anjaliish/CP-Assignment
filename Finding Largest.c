#include <stdio.h>

int largest(int a[10])
{   int lag = a[0],i;
 
    for (i = 1; i < 10; i++)
        if (a[i] > lag)
            lag = a[i];
    return lag;
}
 
int main()
{
    int a[10],i;
    printf("enter the values");
    for (i = 1; i < 10; i++)
    scanf("%d",&a[i]);
    
    printf("Largest No. in given array is %d", largest(a));
    return 0;
