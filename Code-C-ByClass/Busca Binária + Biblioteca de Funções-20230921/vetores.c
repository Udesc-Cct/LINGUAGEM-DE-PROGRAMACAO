#include "vetores.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

