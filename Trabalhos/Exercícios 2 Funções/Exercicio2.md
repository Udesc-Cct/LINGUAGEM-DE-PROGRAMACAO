# Segue abaixo as resoluções para os exercícios propostos:

## Exercício 1 
Faça um programa que lê os três lados de um triângulo e determina o seu tipo, conforme 
códigos a seguir. Os códigos devem ser retornados por uma função de tipo int, que recebe 
os lados do triângulo como parâmetro. Protótipo da função:
```c
#include <stdio.h>

int tipo_triangulo(float x, float y, float z) {
    if (x + y <= z || x + z <= y || y + z <= x) {
        return 0;
    } else if (x == y && y == z) {
        return 1;
    } else if (x == y || x == z || y == z) {
        return 2;
    } else {
        return 3;
    }
}

int main() {
    float x, y, z;
    
    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &x, &y, &z);
    
    int tipo = tipo_triangulo(x, y, z);
    
    switch (tipo) {
        case 0:
            printf("Os lados não formam um triângulo.\n");
            break;
        case 1:
            printf("Triângulo equilátero.\n");
            break;
        case 2:
            printf("Triângulo isósceles.\n");
            break;
        case 3:
            printf("Triângulo escaleno.\n");
            break;
    }
    
    return 0;
}
```
## Exercício 2
Faça uma função que recebe três valores inteiros e retorna o maior valor. É preciso 
considerar que podem haver dois (ou mesmo os três) parâmetros iguais como sendo o 
maior valor. Por exemplo, os parâmetros poderiam ser 5, 8 e 8. Neste caso, a função deve 
retornar 8.
```c
#include <stdio.h>

int maior_valor(int a, int b, int c) {
    int maior = a;
    
    if (b > maior) {
        maior = b;
    }
    
    if (c > maior) {
        maior = c;
    }
    
    return maior;
}

int main() {
    int a, b, c;
    
    printf("Digite três valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int maior = maior_valor(a, b, c);
    
    printf("O maior valor é: %d\n", maior);
    
    return 0;
}
```
## Exercício 3
Escreva um programa que informa se um caractere digitado pelo usuário representa um 
dígito de 0 a 9. A verificação deve ser feita por uma função booleana (int) que recebe um
char como parâmetro. Caso o caractere seja um dígito, converta-o para um valor inteiro e 
o armazene em uma variável int. Em seguida, mostre o valor inteiro na tela.
```c
#include <stdio.h>
#include <stdbool.h>

bool eh_digito(char c, int* valor) {
    if (c >= '0' && c <= '9') {
        *valor = c - '0';
        return true;
    } else {
        return false;
    }
}

int main() {
    char c;
    
    printf("Digite um caractere: ");
    scanf(" %c", &c);
    
    int valor;
    bool ehDigito = eh_digito(c, &valor);
    
    if (ehDigito) {
        printf("O caractere representa um dígito: %d\n", valor);
    } else {
        printf("O caractere não representa um dígito.\n");
    }
    
    return 0;
}
```
## Exercício 4
Faça uma função que recebe 2 parâmetros, x e y, e calcule a soma dos números impares 
entre eles (sem contar com eles mesmos). Repare que a função deve levar em conta de 
que x pode ser maior do que y. Por exemplo, para x = 6 e y = -5, temos a seguinte soma 
(em ordem crescente): -3 + (-1) + 1 + 3 + 5 = 5. Outro exemplo: para x = 3 e y = 10 temos 5 + 7 + 9 = 21.
```c
#include <stdio.h>

int soma_impares(int x, int y) {
    int soma = 0;
    
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }
    
    for (int i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    
    return soma;
}

int main() {
    int x, y;
    
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &x, &y);
    
    int soma = soma_impares(x, y);
    
    printf("A soma dos números ímpares entre %d e %d é: %d\n", x, y, soma);
    
    return 0;
}
```
## Exercício 5
Faça um programa que, dados k e n, mostre na tela os n primeiros números primos acima 
de k. A verificação do número (se é ou não é primo) deve ser feita através de uma função.
```c
#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int n) {
    if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int k, n, count = 0;
    
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    printf("Os %d primeiros números primos acima de %d são: ", n, k);
    
    int i = k + 1;
    while (count < n) {
        if (eh_primo(i)) {
            printf("%d ", i);
            count++;
        }
        i++;
    }
    
    printf("\n");
    
    return 0;
}
```
## Exercício 6
Faça um programa que mostre na tela os n primeiros termos da sequência de Fibonacci. 
Por exemplo, dado n = 8, temos: 1, 1, 2, 3, 5, 8, 13 e 21. A determinação do n-ésimo termo 
da sequência deve ser feita por uma função iterativa que tem o seguinte protótipo:

```c
#include <stdio.h>

int fibo(int n) {
    if (n <= 1)
        return n;
    else
        return fibo(n-1) + fibo(n-2);
}

int main() {
    int n, i;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Sequência de Fibonacci: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}
```
## Exercício 7
Escreva uma função que calcula o somatório dos n termos que são múltiplos de k a partir 
de x. Os parâmetros são determinados pelo usuário e a função é chamada pelo programa

```c
#include <stdio.h>

int soma_especial(int n, int k, int x) {
    int soma = 0;
    int i;
    for (i = 0; i < n; i++) {
        soma += x + (i * k);
    }
    return soma;
}

int main() {
    int n, k, x;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Somatório: %d\n", soma_especial(n, k, x));
    return 0;
}
```
## Exercício 8
Faça um programa que leia um inteiro n e determine a soma S da seguinte forma: 1 + 2 + 3 + 4 + ... + n. Escreva duas versões de funções: iterativa e recursiva.

```c
#include <stdio.h>

int soma_iterativa(int n) {
    int soma = 0;
    int i;
    for (i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int soma_recursiva(int n) {
    if (n == 1)
        return 1;
    else
        return n + soma_recursiva(n-1);
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Soma iterativa: %d\n", soma_iterativa(n));
    printf("Soma recursiva: %d\n", soma_recursiva(n));
    return 0;
}
```
## Exercício 9
Faça um programa que leia um inteiro n e utilize uma função (faça as versões iterativa e 
recursiva) para determinar a soma S da série harmônica definida a seguir:

```c
#include <stdio.h>

float soma_harmonica_iterativa(int n) {
    float soma = 0;
    int i;
    for (i = 1; i <= n; i++) {
        soma += 1.0 / i;
    }
    return soma;
}

float soma_harmonica_recursiva(int n) {
    if (n == 1)
        return 1;
    else
        return 1.0 / n + soma_harmonica_recursiva(n-1);
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Soma iterativa: %f\n", soma_harmonica_iterativa(n));
    printf("Soma recursiva: %f\n", soma_harmonica_recursiva(n));
    return 0;
}
```
## Exercício 10
) Faça um programa que leia um inteiro n e utilize uma função (faça as versões iterativa e 
recursiva) para calcular o somatório que determina o valor da constante e:

```c
#include <stdio.h>

float calcular_e_iterativo(int n) {
    float soma = 0;
    int i, fatorial = 1;
    for (i = 0; i <= n; i++) {
        if (i > 0) {
            fatorial *= i;
        }
        soma += 1.0 / fatorial;
    }
    return soma;
}

float calcular_e_recursivo(int n) {
    if (n == 0)
        return 1;
    else {
        int fatorial = 1;
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        return 1.0 / fatorial + calcular_e_recursivo(n-1);
    }
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Valor de e (iterativo): %f\n", calcular_e_iterativo(n));
    printf("Valor de e (recursivo): %f\n", calcular_e_recursivo(n));
    return 0;
}
```