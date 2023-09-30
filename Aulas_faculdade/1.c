//Questão 1

#include <stdio.h> /*Inclusão da biblioteca stdio.h para usar comandos de leitura e impressao de dados dados*/

int main() //função onde ficará inserido dentro das chaves o programa a ser executado
{

   double n1, n2, soma,sub,mult, divs;
   //Na linha acima foram declaradas as variáveis de tipo double p/ os valores e operações

   printf("Insira um valor: \n");
   scanf("%lf", &n1);
   printf("Insira outro valor: \n");
   scanf("%lf", &n2);
   /*As quatro linhas acima é pedido ao usuário por meio de mensagem impressa na tela com printf que
   insira dois valores que serão lidos e armazenados nas variáveis n1 e n2 por meio de scanf*/

   soma = n1+n2;
   sub = n1-n2;
   mult = n1*n2;
   divs = n1/n2;
   //Na quatro linhas acima são realizadas as operações aritméticas com os valores de n1 e n2

   printf("Resultado: \n%.2f\n%.2f\n%.2f\n%.2f", soma, sub, mult, divs);
   //A linha acima printa os resultados das operações com duas casas dcimais

    return 0; //Se houver erros, este comando retornará a quantidade deles
}


//Questão 2

#include <stdio.h>

int main()
{
    int c, f; //declaradas as variáveis que receberão valores inteiros
    
    printf("Insira a temperatura em Celsius: \n"); //printa pedindo a inserção de um valor de temperatura em Celsius
    scanf("%d", &c); //lê o input e rmazena o valor na variável c
    
    f = c*1.8+32; //Operação de conversão de Celsius p/ Fahrenheit
    
    printf("A temperatura inserida em Celsius equivale a %d°F (Fahrenheit)", f); //Printa o resultado
    
    return 0;
}

//Questão 3

#include <stdio.h>

int main()
{
    float n1, n2, n3, m; //declarando as variáveis das notas e da média como ponto flutuante
    
    printf("Insira a primeira nota: \n");
    scanf("%f", &n1);
    printf("Insira a primeira nota: \n");
    scanf("%f", &n2);
    printf("Insira a primeira nota: \n");
    scanf("%f", &n3);
    /*As seis linhas acima pedem ao usuário que insira três valores que são as notas e os inputs são lidos pelo
     scanf que armazena nas respectivas variáveis das notas n1,n2 e n3*/
    
    m = (n1+n2+n3)/3; //Cáculo da média
    
    printf("A média das notas é: %.1f", m); //printa o resultado da média com uma casa decimal
   
    return 0;
}

//Questão 4

#include <stdio.h>

int main()
{
    double c, i, t, j; //declaraçãoddas variáveis em double p/ maior precisão
    
    printf("Insira o valor do capital: \n");
    scanf("%lf", &c);
    /*Nas duas linhas acima o programa pede ao usuário que insira um valor p/ o capital e scanf lê e
    armazena este valor em c*/
    
    printf("Insira a taxa de juros anual em porcentagem: \n");
    scanf("%lf", &i);
    /*Nas duas linhas acima o programa pede ao usuário que insira um valor p/ taxa de juros e o scanf
    lê e armazena este valor em i*/
    
    printf("Insira a quantidade de anos: \n");
    scanf("%lf", &t);
    /*Nas duas linhas acima o programa pede ao usuário que insira um valor p/ o tempo e o scanf lê e 
    armazena este valor em t*/

    
    j = c*(i/100)*t; //Cálculo de juros simples
    
    printf("Os juros srão de R$%.2lf", j); //printa o resultado da esquação com duas casas decimais
   
    return 0;
}

//Questão 5

#include <stdio.h>

int main()
{
    double d, r; //declaração de variáveis tipo double
    
    printf("Insira um valor em dólar(US$): \n"); //printa pedindo ao usuário que insira uma quantia em dólar
    scanf("%lf",&d); //lê o input e armazena o valor na variável d
    
    r = d*4.86; //Conversão de dólar pra real
    
    printf("US$%.2lf vale no momento R$%.2lf", d, r); /*prnta o valor inserido pelo usuário e o valor convertido 
    em real com duas casas decimais*/
   
    return 0;
}

//Questão 6

#include <stdio.h>

int main()
{
    double n1, n2, n3, mp; //declarando as variáveis das notas e média como double p/ maior precisao
    int p1,p2,p3; //declarando as variáveis de peso que são valores inteirs
    
    printf("Insira a nota da lista 1: \n");
    scanf("%lf", &n1);
     printf("Insira a nota da lista 2: \n");
    scanf("%lf", &n2);
     printf("Insira a nota da lista 3: \n");
    scanf("%lf", &n3);
    /* Nas seis linhas acima, são printadas mensagens p/ o usuário inserir as três notas e
    que serão digitados e o scanf vai ler e armazendas nas respectivas variáveis n1, n2 e n3*/
    
    printf("Insira os pesos das notas das listas 1, 2 e 3 em sequência separados por espaço: \n");
    //A linha acima pede que o usuário insira os pesos
    
    scanf("%d %d %d", &p1, &p2, &p3); //lê o input e armazena os pesos nas respectivas variáveis
    
    
    
    mp = ((n1*p1)+(n2*p2)+(n3*p3))/(n1+n2+n3); //Cálculo da média ponderada
    
    printf("A média ponderada das notas das listas é: %.1lf", mp); /*printa o resultado da média com
    uma casa decimal*/
   
    return 0;
}

//Questão 7

#include <stdio.h>

int main()
{
    double p, c; //declaração de variáveis do tipo double para polegadas e centímetros
    
    printf("Insira um valor em polegadas: \n"); /*printa pedidndo que o usuário insira 
    um valor em polegadas*/
    
    scanf("%lf", &p); //lê o input e amazena em p
    
    c = p*2.54; //conversão de polegadas em centímetros
    
    printf("%.2lf polegada(s) equivale a %.2lf centímetro(s)", p, c);
    //A linha acima printa o valor em polegadas e o equivalente em centímetros com duas casas decimais
   
    return 0;
}