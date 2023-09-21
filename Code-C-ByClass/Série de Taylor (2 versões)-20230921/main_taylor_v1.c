#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double x;
	int n, i, j;
	printf("Digite o valor de X: ");
	scanf("%lf", &x);
	printf("Quantos termos? ");
	scanf("%d", &n);
	
	double ex = 0;
	
	for( i = 0 ; i <= n ; i++ ){
		double pot = 1;
		int fat = 1;
		for( j = 1 ; j <= i ; j++ ){
			pot *= x; // pot = pot * x;
			fat *= j; // fat = fat * j;
		}
		ex += pot/fat; // ex = ex + pot/fat;
	}
	printf("e elevado a %.3lf (%d termos): %.15lf\n", x, n, ex);
	
	return 0;
}
