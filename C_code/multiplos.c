
#include <stdio.h>

int main()
{
    int num1, num2, i;
    
    printf("Insira dois números: \n");
    scanf("%d \n %d", &num1, &num2);
   
   if(num1>num2){
       i = num1;
       num1 = num2;
       num2 = i;
   }
   
   if(num2%num1==0){
       printf("São múltiplos \n");
   } else {
       printf("Não são múltiplos \n");
       
   }

    return 0;
}

