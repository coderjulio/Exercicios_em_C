#include <stdio.h>
#include <locale.h>
#include <math.h>


//primeiro

int main()
{
    double v; 
    
    printf("Insira um valor: \n"); 
    scanf("%lf", &v); 
    
    printf("O quadrado deste valor é: %.1lf \n O cubo deste valor é: %.1lf", pow(v, 2), pow(v, 3));

    return 0;
}


//segundo

int main() {
double c, m, i, t; 
    
    printf("Insira o valor do capital: \n");
    scanf("%lf", &c);
    printf("Insira o valor da taxa de juros anual: \n");
    scanf("%lf", &i);
    printf("Insira o tempo em anos: \n");
    scanf("%lf", &t);
    
    m = c * pow((1 + (i / 100)), t);

    
    printf("O montante do capital é: %.2lf", m);

    return 0;
}


//terceiro

    double x;
    
    printf("Insira um valor: \n");
    scanf("%lf", &x);
    printf("A raiz quadrada deste valor é: %.1lf", sqrt(x));
    
    return 0;
}


//quarto

int main()
 {
     double lado1, lado2, area, perimetro;
     printf("qual a largura do terreno? (em metros) ");
     scanf("%lf", &lado1);
     printf("qual o comprimento do terreno? (em metros) ");
     scanf("%lf", &lado2);
     area = lado1*lado2;
     perimetro = lado1*2+lado2*2;
     printf("a area do terreno e: %.2lf \n", area);
     printf("o perimetro do terreno e: %.2lf", perimetro);

     return 0;
 }


//quinto

int main()
{
    int A, B, C, delta = 0;
    double x1 = 0, x2 = 0;
    printf("digite o valor de A ");
    scanf("%d", &A);
    printf("digite o valor de B ");
    scanf("%d", &B);
    printf("digite o valor de C ");
    scanf("%d", &C);
    delta = (B * B) - (4 * A * C);
    if (delta < 0)
    {
        printf("nao tem raiz real");
    }
    else
    {
        x1 = ((-B) + sqrt(delta)) / (2 * A);
        x2 = ((-B) - sqrt(delta)) / (2 * A);
        printf("o valor de x1 e %.2lf e de x2 e %.2lf", x1, x2);
    }

    return 0;
}


//sexto

int main() {
    int hora, minutos, resultado;
    printf("que horas sao (so as horas 0-23): ");
    scanf("%d", &hora);
    printf("quantos minutos sao (so os minutos 0-60): ");
    scanf("%d", &minutos);
    resultado = (hora * 60) + minutos;
    printf("ja se passaram %d minutos desde o inicio do dia", resultado);
    if (minutos == 0) {
        hora = 24 - hora;
    }
    else {
        hora = 23 - hora;
        minutos = 60 - minutos;
    }
    printf("faltam %d horas e %d minutos para o final do dia", hora, minutos);

    return 0;
}


//sétimo

int main() {
    int x1, x2, y1, y2;
    double distancia;
    printf("digite o valor de x da coordenada 1: ");
    scanf("%d", &x1);
    printf("digite o valor de y da coordenada 1: ");
    scanf("%d", &y1);
    printf("digite o valor de x da coordenada 2: ");
    scanf("%d", &x2);
    printf("digite o valor de y da coordenada 2: ");
    scanf("%d", &y2);
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("a distancia entre os pontos e: %.2lf", distancia);
    
    return: 0;
}
