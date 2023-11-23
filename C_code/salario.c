
#include <stdio.h>

int main()
{
    char nome[50];
    int opcao, horas;
    double salario, valorHora;
    

        printf("Seu nome: \n");
        fgets(nome, 50, stdin);
        printf("O que dejseja saber? \n");
        printf("Quanto ganha por hora trabalhada com base mo salário digite '1' \n");
        printf("Salário com base na quantidade de horas trabalhadas digite '2' \n");
        scanf("%d", &opcao);
        while(opcao!=1&&opcao!=2){
            scanf("%d", &opcao);
        }
        
        switch(opcao){
            case 1:
                printf("Salário em R$**.**:\n");
                scanf("%lf", &salario);
                printf("Horas trabalhadas:\n");
                scanf("%d", &horas);
                printf("%sganha R$%.2lf por hora\n",nome, salario/(double)horas);
                break;
            case 2:
                printf("Horas trabalhadas:\n");
                scanf("%d", &horas);
                printf("Valor ganho por hora R$**.**:\n");
                scanf("%lf", &valorHora);
                printf("Salário de %s:R$%.2lf", nome, valorHora*(double)horas);
                break;
        } 
        return 0;
}

