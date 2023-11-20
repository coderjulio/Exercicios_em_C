#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{

    int opcao;
    char operador;
    double altura, peso, imc;

    printf("Escolha uma das opções a seguir: \n");
    printf("1 - Calcular IMC \n");
    printf("2 - Fazer operacoes aritimeticas \n");
    printf("3 - Calcular area do circulo \n");
    printf("3 - Converter temperaturas \n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Insira sua altura: \n");
            scanf("%lf", &altura);
            imc = peso /  pow(altura, 2);
            printf("Seu IMC é %.2lf", imc);

        case 2:
            printf("Insira valores para fazer operacoes: \n");
            while(1) {
                scanf("%d", &num);
            }
            printf("Insira um operador: \n");
            scanf("%c", &operador);
            case '+':


    }

    return 0;
}
