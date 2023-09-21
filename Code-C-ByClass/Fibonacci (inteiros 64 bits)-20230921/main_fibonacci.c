#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, i;
	printf("Quantos termos? ");
	scanf("%d", &n);
	
	printf("1 : 1\n2 : 1\n");
	
	long long int a = 1, b = 1, atual; // inteiros de 64 bits
	
	for( i = 3 ; i <= n ; i++ ){
		atual = a + b;
		printf("%d : %lld\n", i, atual);
		a = b;
		b = atual;
	}
	
	return 0;
}
