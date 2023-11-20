// Crie um programa em C que solicita ao usuário inserir 6 notas em numeros inteiros, 
// calcula a média dessas notas e imprime a média, com o resultado da soma das notas 
// faça a soma de todos os números pares compreendidos na soma e imprima na tela, e 
// faça o mesmo para os números impares e 
// imprima na tela deve-se usar a estrutura de repetição for.

#include <stdio.h>

int main(){
      int n1, n2, n3, n4, n5, n6;
        int somaPar=0, somaImpar=0;
    
        printf("Insira a primeira notas \n");
        scanf ("%d", &n1);
        printf("Insira a segunda notas \n");
        scanf ("%d", &n2);
        printf("Insira a terceira notas \n");
        scanf ("%d", &n3);
        printf("Insira a quarta notas \n");
        scanf ("%d", &n4);
        printf("Insira a quinta notas \n");
        scanf ("%d", &n5);
        printf("Insira a sexta notas \n");
        scanf ("%d", &n6);
    
        int soma = n1+n2+n3+n4+n5+n6;
        double media = soma/6;
    
        for(int i = 0; i<=soma; i+=2){
             somaPar += i;
        }
        for(int i = 0; i<=soma; i++){
            if(i%2!=0){
             somaImpar += i;
            }
        }
        printf("MEDIA: %.1lf \n", media);
        printf("SOMA DOS PARES: %d \n", somaPar);
        printf("SOMA DOS IMPARES: %d \n", somaImpar);
}

462 441