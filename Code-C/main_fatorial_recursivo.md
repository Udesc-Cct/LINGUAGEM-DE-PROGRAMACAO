# Descrição
Primeiro exemplo de fatorial recursivo em c.
# Code
```c
#include <stdio.h>
#include <stdlib.h>

int fatorial( int x );

int main(int argc, char *argv[]) {
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	printf("Fatorial de %d : %d\n", n, fatorial( n ) );
	
	return 0;
}

int fatorial( int x ){
	if( x == 0 ){
		printf("[Caso base: retorna 1]\n");
		return 1;
	}
	else{
		printf("[Calculando fatorial de %d: %d*%d!...]\n", x, x, x-1);
		int y = fatorial( x-1 );
		printf("[Retorno da chamada recursiva: %d! : %d]\n", x-1, y);
		return x * y;
	}
}
```
# Saída
```
/tmp/o5hJzK2ftZ.o
Digite um numero: 4
[Calculando fatorial de 4: 4*3!...]
[Calculando fatorial de 3: 3*2!...]
[Calculando fatorial de 2: 2*1!...]
[Calculando fatorial de 1: 1*0!...]
[Caso base: retorna 1]
[Retorno da chamada recursiva: 0! : 1]
[Retorno da chamada recursiva: 1! : 1]
[Retorno da chamada recursiva: 2! : 2]
[Retorno da chamada recursiva: 3! : 6]
Fatorial de 4 : 24
```
