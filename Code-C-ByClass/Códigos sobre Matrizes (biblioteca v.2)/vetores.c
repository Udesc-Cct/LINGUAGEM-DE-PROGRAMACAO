#include "vetores.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funções para vetores

void mostra_vetor( int x[], int k, char nome[] ){
	int i;
	printf("%s", nome);
	for( i = 0 ; i < k ; i++ ){
		printf("%d ", x[i] );
	}
	printf("\n");
}

void mostra_vetor_2( int x[], int k, char nome[] ){
	int i;
	printf("%s\n", nome);
	for( i = 0 ; i < k ; i++ ){
		printf("%d: %d\n", i, x[i] );
	}
	printf("\n");
}

void selection_sort( int x[], int k ){
	int i;
	for( i = 0 ; i < k-1 ; i++ ){
		int i_menor = i , j;
		for( j = i+1 ; j < k ; j++ ){
			if( x[j] < x[i_menor] )
				i_menor = j;
		}
		int aux = x[i];
		x[i] = x[i_menor];
		x[i_menor] = aux;
		//Mostra vetor parcialmente ordenado.
		/*
		printf("(i=%d): ", i);
		for( j = 0 ; j < k ; j++ )
			printf("%d ", x[j] );
		printf("\n");
		*/
	}
}

void gera_valores( int x[], int k, int limite ){
	int i;
	srand( time( 0 ) ); // Define a "semente" do rand() como sendo a hora atual
	for( i = 0 ; i < k ; i++ )
		x[i] = rand() % limite + 1 ; // Gera um número entre 1 e limite.
}

void gera_valores_ordem( int x[], int k, int limite ){
	int i;
	srand( time( 0 ) ); // Define a "semente" do rand() como sendo a hora atual
	x[0] = rand() % limite + 1 ; // Gera o 1o valor.
	for( i = 1 ; i < k ; i++ )
		x[i] = x[i-1] + rand() % 10 + 1 ; // Gera incremento entre 1 e 10.
}

void bubble_sort( int x[], int k ){
	int i, trocou;
	do{
		trocou = 0;
		for( i = 0 ; i < k-1 ; i++ ){
			if( x[i] > x[i+1] ){
				int aux = x[i];
				x[i] = x[i+1];
				x[i+1] = aux;
				trocou = 1;
			}
		}
		//Mostra vetor parcialmente ordenado.
		/*
		int j;
		printf("v: ");
		for( j = 0 ; j < k ; j++ )
			printf("%d ", x[j] );
		printf("\n");
		*/
	}while( trocou );
}

int busca_binaria( int x[], int n, int chave ){
	int ini = 0, fim = n-1, meio;
	int cont = 0;
	do{
		cont++; // Registra a contagem de iterações;
		meio = ( ini + fim ) / 2;
		if( x[meio] == chave ){
			printf("[Busca executada em %d iteracoes.]\n", cont);
			return meio;
		}
		if( x[meio] < chave )
			ini = meio + 1;
		else
			fim = meio - 1;		
	}while( ini <= fim );
	printf("[Busca executada em %d iteracoes.]\n", cont);
	return -1;
}

// Funções para matrizes

void gera_valores_matriz( int lin, int col, int x[lin][col] ){
	int i, j;
	for( i = 0 ; i < lin ; i++ )
		for( j = 0 ; j < col ; j++ )
			x[i][j] = rand() % 1000;
}

void mostra_matriz( int lin, int col, int x[lin][col] ){
	int i, j;
	printf("Dados da Matiz %dx%d:\n", lin, col);
	for( i = 0 ; i < lin ; i++ ){
		for( j = 0 ; j < col ; j++ ){
			printf("%d\t", x[i][j]);
		}
		printf("\n");
	}
	printf("-------------------------------------------\n");
}

void diagonal_principal( int dim, int x[dim][dim] ){
	int i, j;
	printf("Diagonal Principal: ");
	for( i = 0 ; i < dim ; i++)
		printf("%d ", x[i][i]);
	/*
	for( i = 0 ; i < dim ; i++ )
		for( j = 0 ; j < dim ; j++ )
			if( i == j )
				printf("%d ", x[i][j]);
	*/
	printf("\n\n");
}

void diagonal_secundaria( int dim, int x[dim][dim] ){
	int i, j;
	printf("Diagonal Secundaria: ");
	for( i = 0 ; i < dim ; i++)
		printf("%d ", x[i][dim-1-i]);
	/*
	for( i = 0 ; i < dim ; i++ )
		for( j = 0 ; j < dim ; j++ )
			if( i + j == dim-1 ) // j == dim-1-i
				printf("%d ", x[i][j]);
	*/
	printf("\n\n");
}

