#include <stdio.h>

int main()
{
//1
    int n;
    int i = 0;

    printf("Insira um número: \n");
    scanf("%d", &n);

    while (i <= n)
    {

        if (n < 0)
        {
            break;
        }

        printf("%d \n", i);
        i += 2;

//2
    int num;

    printf("Insira um numero positivo: \n");
    scanf("%d", &num);

    while(num >= 0){
        scanf("%d", &num);

        if(num < 0) {
            printf("O numero negativo encerrou o programa");
        }
    }

//3
       double num, soma = 0;

    printf("Insira numeros positivos: \n");

    while(1){
        scanf("%lf", &num);

        if(num < 0) {
            break;
            }
    soma += num;
    }
   printf("Resultado da soma: %.2lf", soma);

    return 0;

//4
{
  int n, soma = 0, i = 0;

    printf("Insira um número: \n");
    scanf("%d", &n);

    while (i <= n)
    {

        if (n < 0)
        {
            break;
        }

        soma += i;
        i += 2;
    }
    printf("A soma dos pares ate %d é: %d", n, soma);

    
//5
    int num, i = 1;
    
    printf("Insira um numero: \n");
    scanf("%d", &num);
    
    while(i <= 10){
        printf("%d x %d = %d \n", num, i, num*i);
        i++;
    }
    return 0;
}

