#include <stdio.h>

int main()
{
    int i, n, a1 = 0, a2 = 1, nextTerm;
    printf("Enter a number:");
    scanf("%d", &n);
    
    //it displays the first two terms which is always 0 and 1.
    
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) 
    {
        printf("%d, ", a1);
        nextTerm = a1 + a2;
        a1 = a2;
        a2 = nextTerm;
    }

    return 0;
}

