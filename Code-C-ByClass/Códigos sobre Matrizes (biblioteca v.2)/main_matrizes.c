#include <stdio.h>
#include <stdlib.h>
#include "vetores.h"

#define LIN 5
#define COL 6
#define DIM 6

int main(int argc, char *argv[]) {
	int m[DIM][DIM];
	gera_valores_matriz( DIM, DIM, m );
	mostra_matriz( DIM, DIM, m );
	diagonal_principal( DIM, m );
	diagonal_secundaria( DIM, m );
	
	/*
	int mat[LIN][COL];	
	gera_valores_matriz( LIN, COL, mat );
	mostra_matriz( LIN, COL, mat );
	
	int m[10][12];
	gera_valores_matriz( 10, 12, m );
	mostra_matriz( 10, 12, m );
	*/	
	return 0;
}

