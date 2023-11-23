#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the firts number: \n");
    scanf("%d", &a);
    printf("Enter the second number: \n");
    scanf("%d", &b);
    printf("Enter the third number: \n");
    scanf("%d", &c);
    
    if(a<b && a<c){
        printf("The %d is the lowest \n", a);
    }
    else if(b<a && b<c){
        printf("The %d is the lowest \n", b);
    }
    else if(c<b && c<a){
        printf("The %d is the lowest \n", c);
    } 
    else if(a==b || a==c || b==c){
        printf("They are equal \n");
    }
    return 0;
}
