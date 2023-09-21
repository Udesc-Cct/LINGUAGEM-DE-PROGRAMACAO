# Lista de Exercícios 3 – Vetores e Funções
## 1) Comparação de vetores:
Escreva uma função que recebe dois vetores de mesma capacidade n e compara se os
mesmos são iguais, ou seja, se contêm os mesmos valores e na mesma ordem. A função
deve ser booleana, ou seja, se forem iguais retorna 1, caso contrário retorna 0. Protótipo
da função:
```c
#include <stdio.h>

int compara(float a[], float b[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, i;
    printf("Digite a capacidade dos vetores: ");
    scanf("%d", &n);
    float vetor1[n], vetor2[n];
    printf("Digite os elementos do primeiro vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &vetor1[i]);
    }
    printf("Digite os elementos do segundo vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &vetor2[i]);
    }
    if (compara(vetor1, vetor2, n)) {
        printf("Os vetores são iguais.\n");
    } else {
        printf("Os vetores são diferentes.\n");
    }
    return 0;
}
```
## 2) Geração da sequência de Fibonacci:
Escreva uma função que recebe um vetor v e um inteiro n. A função deve gerar o n termos
de sequência de Fibonacci dentro de v. Protótipo da função:
```c
#include <stdio.h>

void fibonacci(int v[], int n) {
    int i;
    v[0] = 0;
    v[1] = 1;
    for (i = 2; i < n; i++) {
        v[i] = v[i-1] + v[i-2];
    }
}

int main() {
    int n, i;
    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &n);
    int vetor[n];
    fibonacci(vetor, n);
    printf("Sequência de Fibonacci: ");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
```
## 3) Soma dos números primos em um vetor:
Faça uma função que recebe um vetor e sua capacidade como parâmetros e retorna o
somatório dos números primos contidos no vetor. Recomenda-se utilizar a função de
verificação (se um número é primo ou não) já implemetada. Protótipo:

```c
#include <stdio.h>

int is_primo(int num) {
    if (num < 2) {
        return 0;
    }
    int i;
    for (i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int soma_primos(int v[], int n) {
    int soma = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (is_primo(v[i])) {
            soma += v[i];
        }
    }
    return soma;
}

int main() {
    int n, i;
    printf("Digite a capacidade do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("Soma dos números primos: %d\n", soma_primos(vetor, n));
    return 0;
}
```
## 4) Busca sequencial em um vetor:
Escreva uma função que recebe um vetor v, sua capacidade n e uma chave de busca. A
função também recebe um vetor que vai armazenar os índices em que a chave se encontra
em v. A função deve fazer a busca de maneira sequencial e armazenar os índices em que a
chave se encontra e preencher o resto do vetor com -1. Os vetores v e indices devem ter a
mesma capacidade. Protótipo da função:
```c
#include <stdio.h>

void busca_todos(int v[], int n, int chave, int indices[]) {
    int i, j = 0;
    for (i = 0; i < n; i++) {
        if (v[i] == chave) {
            indices[j] = i;
            j++;
        }
    }
    for (i = j; i < n; i++) {
        indices[i] = -1;
    }
}

int main() {
    int n, i, chave;
    printf("Digite a capacidade do vetor: ");
    scanf("%d", &n);
    int vetor[n], indices[n];
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("Digite a chave de busca: ");
    scanf("%d", &chave);
    busca_todos(vetor, n, chave, indices);
    printf("Índices encontrados: ");
    for (i = 0; i < n; i++) {
        printf("%d ", indices[i]);
    }
    printf("\n");
    return 0;
}
```
## 5) Busca sequencial recursiva em um vetor:
Implemente a versão recursiva da função que faz a busca sequencial em um vetor.
Protótipo da função:
```c
#include <stdio.h>

int busca_seq_rec(int v[], int n, int chave) {
    if (n == 0) {
        return -1;
    }
    if (v[n-1] == chave) {
        return n-1;
    }
    return busca_seq_rec(v, n-1, chave);
}

int main() {
    int n, i, chave;
    printf("Digite a capacidade do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("Digite a chave de busca: ");
    scanf("%d", &chave);
    int indice = busca_seq_rec(vetor, n, chave);
    if (indice != -1) {
        printf("A chave foi encontrada no índice %d.\n", indice);
    } else {
        printf("A chave não foi encontrada no vetor.\n");
    }
    return 0;
}
```