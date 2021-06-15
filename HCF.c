Write a C program to find HCF of two given numbers

#include <stdio.h>

int main()
{
    int n1, n2 , i ,hcf;
    
    n1 = 12;
    n2 = 18;
    
    for(i=1;i<=n1||i<=n2;++i)
    { 
        if(n1%i==0 && n2%i==0)
        hcf=i;
    }
    
    printf("HCF of %d and %d = %d", n1,n2,hcf);

    return 0;
}
