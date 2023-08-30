# Descrição
Calculo do seno pelos termos com funções.
# Code
```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double seno_it( double x, int n );
double seno_rec( double x, int n, int i, double termo );

int main(int argc, char *argv[]) {
	double x;
	int n;
	//printf("Digite o valor de x: ");
	//scanf("%lf", &x);
	x = M_PI_2; // 90 graus
	printf("Digite a quantidade de termos: ");
	scanf("%d", &n);
	
	//printf("Seno de %.3lf (%d termos): %.15lf", x, n, seno_it( x, n ) );
	
	printf("Seno de %.3lf (%d termos): %.15lf", x, n, seno_rec( x, n, 1, x ) );
	
	return 0;
}

double seno_it( double x, int n ){
	int i;
	double termo = x; // para cosseno, termo = 1;
	double seno = 0;
	// para cosseno, i = 0;
	for( i = 1 ; i <= 2*n ; i+=2 ){
		seno += termo;
		termo *= ( x/(i+1) ) * ( x/(i+2) ) * (-1);
	}
	return seno;
}

double seno_rec( double x, int n, int i, double termo ){
	if( i <= 2*n )
		return termo + seno_rec( x, n, i+2, termo*(x/(i+1))*(x/(i+2))*(-1) );
	else
		return 0; // Encerra o processo.
}
```
# Saída
```
/tmp/o5hJzK2ftZ.o
Digite a quantidade de termos: 6
Seno de 1.571 (6 termos): 0.999999943741051
```

