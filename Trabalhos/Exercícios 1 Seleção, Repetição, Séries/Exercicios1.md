# Lista de Exercícios 1 – Seleção e Repetição
## 1) Coordenadas de um Ponto
Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto 
em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um 
dos eixos cartesianos ou na origem (x = y = 0).

Se o ponto estiver na origem, escreva a mensagem “Origem”.
Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.
### Entrada
A entrada contém as coordenadas de um ponto.
### Saída
A saída deve apresentar o quadrante em que o ponto se encontra.
Exemplo de Entrada Exemplo de Saída
- 4.5 -2.2 Q4
- 0.1 0.1 Q1
- 0.0 0.0 Origem

### Resolução
```c
#include <stdio.h>

int main() {
    float x, y;

    // Leitura das coordenadas do ponto
    scanf("%f %f", &x, &y);

    // Verificação do quadrante ou posição do ponto
    if (x == 0 && y == 0) {
        printf("Origem\n");
    } else if (x == 0) {
        printf("Eixo Y\n");
    } else if (y == 0) {
        printf("Eixo X\n");
    } else if (x > 0 && y > 0) {
        printf("Q1\n");
    } else if (x < 0 && y > 0) {
        printf("Q2\n");
    } else if (x < 0 && y < 0) {
        printf("Q3\n");
    } else {
        printf("Q4\n");
    }

    return 0;
}
```
## 2) Tipos de Triângulos
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado 
A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados 
formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
- se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
- se A2 = B2 + C2
, apresente a mensagem: TRIANGULO RETANGULO
- se A2 > B2 + C2
, apresente a mensagem: TRIANGULO OBTUSANGULO
- se A2 < B2 + C2
, apresente a mensagem: TRIANGULO ACUTANGULO
- se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
- se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
### Entrada
A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < 
C).
### Saída
Imprima todas as classificações do triângulo especificado na entrada.
Exemplos de Entrada Exemplos de Saída
- 7.0 5.0 7.0 TRIANGULO ACUTANGULO
TRIANGULO ISOSCELES
- 6.0 6.0 10.0 TRIANGULO OBTUSANGULO
TRIANGULO ISOSCELES
- 6.0 6.0 6.0 TRIANGULO ACUTANGULO
TRIANGULO EQUILATERO
- 5.0 7.0 2.0 NAO FORMA TRIANGULO
- 6.0 8.0 10.0 TRIANGULO RETANGULO
### Resolução
```c
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    // Leitura dos valores dos lados do triângulo
    scanf("%lf %lf %lf", &a, &b, &c);

    // Ordenação dos lados em ordem decrescente
    if (a < b) {
        double temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        double temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        double temp = b;
        b = c;
        c = temp;
    }

    // Verificação do tipo de triângulo
    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO RETANGULO\n");
        }
        if (pow(a, 2) > pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (pow(a, 2) < pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a == b && b == c) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
```
## 3) Tempo de Jogo
Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o 
mesmo pode começar em um dia e terminar em outro, tendo uma duração máxima de 24 horas.
### Entrada
Dois números inteiros representando o início e o fim do jogo.
### Saída
Mostre a duração do jogo conforme exemplo abaixo.
Exemplo de Entrada Exemplo de Saída
- 16 2 O JOGO DUROU 10 HORA(S)
- 0 0 O JOGO DUROU 24 HORA(S)
- 2 16 O JOGO DUROU 14 HORA(S)
### Resolução
```c
#include <stdio.h>

int main() {
    int horaInicial, horaFinal, duracao;

    // Leitura da hora inicial e hora final do jogo
    scanf("%d %d", &horaInicial, &horaFinal);

    if (horaInicial < horaFinal) {
        duracao = horaFinal - horaInicial;
    } else {
        duracao = 24 - (horaInicial - horaFinal);
    }

    // Impressão da duração do jogo
    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}
```
## 4) Pares, Ímpares, Positivos e Negativos
Leia N valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores 
digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados 
foram negativos.
### Entrada
A entrada contém o valor N, seguido de N valores inteiros quaisquer.
### Saída
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o 
final de linha após cada uma.
Exemplo de Entrada Exemplo de Saída
- Exemplo de Entrada 
5
-5
0
-3
-4
12
- Exemplo de Saída
3 valor(es) par(es)
2 valor(es) impar(es)
1 valor(es) positivo(s)
3 valor(es) negativo(s)

### Resolução
```c
#include <stdio.h>

int main() {
    int n, valor, pares = 0, impares = 0, positivos = 0, negativos = 0;

    // Leitura do valor N
    scanf("%d", &n);

    // Leitura dos valores inteiros e contagem dos pares, ímpares, positivos e negativos
    for (int i = 0; i < n; i++) {
        scanf("%d", &valor);
        if (valor % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        if (valor > 0) {
            positivos++;
        } else if (valor < 0) {
            negativos++;
        }
    }

    // Impressão da contagem dos valores
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

    return 0;
}

```

## 5) Médias Ponderadas
Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de 
teste consiste de 3 valores reais, cada um deles com uma casa decimal. Apresente a média 
ponderada para cada um destes conjuntos de 3 valores, sendo que o primeiro valor tem peso 2, o 
segundo valor tem peso 3 e o terceiro valor tem peso 5.
### Entrada
A entrada contém um valor inteiro N na primeira linha. Cada N linha a seguir contém um caso de 
teste com três valores reais.
### Saída
Para cada caso de teste, imprima a média ponderada dos 3 valores, conforme exemplo abaixo.
### Exemplo de Entrada Exemplo de Saída
3
6.5 4.3 6.2
5.1 4.2 8.1
8.0 9.0 10.0
5.7
6.3
9.3
### Resolução
```c
#include <stdio.h>

int main() {
    int n;
    double a, b, c, media;

    // Leitura do valor N
    scanf("%d", &n);

    // Leitura dos casos de teste e cálculo da média ponderada
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf %lf", &a, &b, &c);
        media = (a * 2 + b * 3 + c * 5) / 10;
        printf("%.1lf\n", media);
    }

    return 0;
}
```
## 6) Soma de Impares Consecutivos I
Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.
### Entrada
Dois valores inteiros.
### Saída
O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre 
os valores fornecidos na entrada que deverá caber em um inteiro.
### Exemplo de Entrada Exemplo de Saída
6
-5
5
### Resultado
```c
#include <stdio.h>

int main() {
    int x, y, soma = 0;

    // Leitura dos valores inteiros X e Y
    scanf("%d", &x);
    scanf("%d", &y);

    // Verificação e soma dos números ímpares entre X e Y
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

    // Impressão da soma dos números ímpares
    printf("%d\n", soma);

    return 0;
}
```
## 7) Soma de Ímpares Consecutivos II
Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste 
consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre X 
e Y.
### Entrada
A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir. 
Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.
### Saída
Imprima a soma de todos valores ímpares entre X e Y.
### Exemplo de Entrada Exemplo de Saída
7
4 5
13 10
6 4
3 3
3 5
3 4
3 8
0
11
5
0
0
0
12
### Resultado
```c
#include <stdio.h>

int main() {
    int n, x, y, soma;

    // Leitura do valor N
    scanf("%d", &n);

    // Leitura dos casos de teste e cálculo da soma dos ímpares
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        soma = 0;

        if (x > y) {
            int temp = x;
            x = y;
            y = temp;
        }

        for (int j = x + 1; j < y; j++) {
            if (j % 2 != 0) {
                soma += j;
            }
        }

        printf("%d\n", soma);
    }

    return 0;
}
```