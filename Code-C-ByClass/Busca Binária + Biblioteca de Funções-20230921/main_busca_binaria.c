#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

#define MAX 100000

int main(int argc, char *argv[]) {
	int v[MAX];
	
	gera_valores_ordem( v, MAX, 100 );
	mostra_vetor_2( v, MAX, "Vetor: " );
	
	int chave;
	printf("Digite o valor a ser buscado: ");
	scanf("%d", &chave);
	
	int id = busca_binaria( v, MAX, chave );
	if( id == -1 )
		printf("Nao encontrado!\n");
	else
		printf("Encontrado em %d.\n", id);	
	
	return 0;
}

