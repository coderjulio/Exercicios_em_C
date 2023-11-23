
#include <stdio.h>

int main()
{
    int t, h, m, s, remain;
    
    printf("Enter a value in seconds \n");
    scanf("%d", &t);
    
    h=t/3600;
    remain=t%3600;
    m=remain/60;
    s=remain%60;
    
    printf("It's equivalent to %dh:%dm:%ds", h, m, s);

    return 0;
}

