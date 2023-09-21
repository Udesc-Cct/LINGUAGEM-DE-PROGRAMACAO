#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

void gera_valores( int x[], int k, int limite );
void mostra_vetor( int x[], int k, char nome[] );
void selection_sort( int x[], int k );
void bubble_sort( int x[], int k );

int main(int argc, char *argv[]) {
	int v[MAX];
	
	gera_valores( v, MAX, 100 );
	mostra_vetor( v, MAX, "Vetor original: " );
	//selection_sort( v, MAX );
	bubble_sort( v, MAX );
	mostra_vetor( v, MAX, "\nVetor ordenado: " );
	
	return 0;
}
void mostra_vetor( int x[], int k, char nome[] ){
	int i;
	printf("%s", nome);
	for( i = 0 ; i < k ; i++ ){
		printf("%d ", x[i] );
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
