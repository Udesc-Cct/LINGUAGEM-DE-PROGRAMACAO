#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	double x;
	int n;
	//printf("Digite o valor de x: ");
	//scanf("%lf", &x);
	x = M_PI_2; // 90 graus
	printf("Digite a quantidade de termos: ");
	scanf("%d", &n);
	
	int i;
	double termo = x; // para cosseno, termo = 1;
	double seno = 0;
	
	// para cosseno, i = 0;
	for( i = 1 ; i <= 2*n ; i+=2 ){
		seno += termo;
		termo *= ( x/(i+1) ) * ( x/(i+2) ) * (-1);
	}
	
	printf("Seno de %.3lf (%d termos): %.15lf", x, n, seno);
	
	return 0;
}
