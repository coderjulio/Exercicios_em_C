#include <stdio.h>

int main()
{

    int num, soma = 0;

    printf("Insira numeros: \n");

    while(1){
        scanf("%d", &num);

        if(num < 0) {
            break;
            }

            soma += num;
    }
   printf("Resultado da soma: %d", soma);

}
        
   
 

