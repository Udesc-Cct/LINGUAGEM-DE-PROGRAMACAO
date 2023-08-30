#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*6) Escreva um algoritmo que lê um valor inteiro N dado pelo usuário e um vetor de inteiros V de 10 posições. Busque o valor no vetor, se ele existe e informe a posição. Se N não existir , encontre o valor mais próximo existente. Use a diferença entre N e cada valor do vetor como métrica de distância*/

int main(){
    int N;
    int vetor[10] = {9, 10, 200, 5, 6, 4, 70, 80, 91};
    int i;
    int menor;
    menor = vetor[0];

    printf("Digite o valor de N");
    scanf("%i",&N);

    for(int i=0; i<10; i++){
        if (abs(vetor[i]-N) == 0){ //caso de ser encontrar o valor
            printf("O %i valor existe na posicao %i",N,i);
        
        }else{ //caso de ser valor diferente 
            if(abs(vetor[i]-N) < menor){
                menor = abs(vetor[i]-N);
            }
        }
    }
    for (int i=0; i<10; i++){
        if(menor == (abs(vetor[i] - N))){
            printf("O valor mais próximo de %i é %i na posição %i\n",N,vetor[i], i);
        }
    }

    return 0;
}