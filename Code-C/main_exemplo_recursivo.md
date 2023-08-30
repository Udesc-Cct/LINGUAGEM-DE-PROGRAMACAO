# Descrição
Primeiro exemplo de recursividade.
# Code
```c
#include <stdio.h>
#include <stdlib.h>

void f( int x );
void g( int x );

int main(int argc, char *argv[]) {
	
	printf("\n... Antes da funcao...\n");
	f( 5 );
	printf("\n... Voltei pra main...\n");
	
	return 0;
}

void f( int x ){
	printf("%d\n", x);
	if( x > 0 ){
		f( x-1 );
		printf("[Voltei da chamada... (%d)...]\n", x);
	}
}

void g( int x ){
	printf("Estou em g:\n");
	printf("%d\n", x);
}
```
# Saída
```
/tmp/o5hJzK2ftZ.o
... Antes da funcao...
5
4
3
2
1
0
[Voltei da chamada... (1)...]
[Voltei da chamada... (2)...]
[Voltei da chamada... (3)...]
[Voltei da chamada... (4)...]
[Voltei da chamada... (5)...]

... Voltei pra main...
```
