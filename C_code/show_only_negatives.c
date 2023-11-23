#include <stdio.h>

int main()
{
    int n, i=0;
    
//Aui elevai ler o numero q o usuario digitar e armazenar no vetor dinamicamente. O vetor portanto deve ser
//criado depois que a n tiver o valor
    printf("How many numbers will you enter? \n");
    scanf("%d", &n);
    
    int v[n];
    
//No for o i começa em 0 e vai repetir enquanto for menor que o valor do vetor, ou seja, se o
//vetor tiver n=2, ele recolhe enqunto i percorrer as posições 0 e 1, pois um vetor[2] tem 3
//posições, mas o user pediu 2 numeros e depois o utro for imrpime somente os negativos
//enquantopercorre o vetor incrementando i, como no primeiro, só q no primeiro ele armazena os numeros
//nas posições e no seguite ele mostra os negativos
    
    for(i=0; i<n; i++){
        printf("Enter a number: \n");
        scanf("%d", &v[i]);
    }
    
    printf("RESULT: \n");
    for(i=0; i<n; i++){
        if(v[i] < 0){
            printf("%d \n", v[i]);
        }
    }

    return 0;
}

