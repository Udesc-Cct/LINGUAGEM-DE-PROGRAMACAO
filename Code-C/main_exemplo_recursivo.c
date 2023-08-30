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

