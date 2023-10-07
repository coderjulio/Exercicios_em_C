#include <stdio.h>

int main()
{

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
    }

    int num;

    printf("Insira um numero positivo: \n");
    scanf("%d", &num);

    while(num >= 0){
        scanf("%d", &num);

        if(num < 0) {
            printf("O numero negativo encerrou o programa");
        }
    }

    return 0;
    }
