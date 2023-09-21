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
