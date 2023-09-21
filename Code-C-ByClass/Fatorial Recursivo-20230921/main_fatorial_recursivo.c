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
