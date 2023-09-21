#include <stdio.h>
#include <stdlib.h>

long long int v[100] = {0}; // Vetor zerado.

long long int fib( int n );

int main(int argc, char *argv[]) {
	int k, i;
	printf("Quantos termos? ");
	scanf("%d", &k );
	for( i = 1 ; i <= k ; i++ )
		printf("%d: %lld\n", i, fib( i ));
		
	return 0;
}

long long int fib( int n ){
	if( n == 1 || n == 2 ){
		v[n] = 1;
		return v[n];
	}
	else{
		if( v[n] == 0 ){
			v[n] = fib( n-1 ) + fib( n-2 );
		}		
		return v[n];
	}
}

