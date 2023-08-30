# Descrição
Algoritmo para solução das trres de hanoi.
# Code
```c
#include <stdio.h>
#include <stdlib.h>

void hanoi( int n, char origem, char destino, char aux );

int main(int argc, char *argv[]) {
	int n;
	printf("Quantos discos? ");
	scanf("%d", &n);
	hanoi( n, 'A', 'C', 'B' );
	
	return 0;
}

void hanoi( int n, char origem, char destino, char aux ){
	if( n == 1 )
		printf("Mova disco 1 de %c para %c.\n", origem, destino );
	else{
		hanoi( n-1, origem, aux, destino );
		printf("Mova disco %d de %c para %c.\n", n, origem, destino );
		hanoi( n-1, aux, destino, origem );
	}	
}
```
# Saída
```
/tmp/o5hJzK2ftZ.o
Quantos discos? 4
Mova disco 1 de A para B.
Mova disco 2 de A para C.
Mova disco 1 de B para C.
Mova disco 3 de A para B.
Mova disco 1 de C para A.
Mova disco 2 de C para B.
Mova disco 1 de A para B.
Mova disco 4 de A para C.
Mova disco 1 de B para C.
Mova disco 2 de B para A.
Mova disco 1 de C para A.
Mova disco 3 de B para C.
Mova disco 1 de A para B.
Mova disco 2 de A para C.
Mova disco 1 de B para C.
```
