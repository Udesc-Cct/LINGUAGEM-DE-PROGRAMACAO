# Descrição
Descobrir numeros primos
# Code
```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int a, b, x;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	int cont_p = 0;
	
	for( x = a ; x <= b ; x++ ){
		int i, eh_primo = 1;
		float r = sqrt( x );
		for( i = 2 ; i < r && eh_primo ; i ++ ){
			if( x % i == 0 )
				eh_primo = 0;
		}
		if( eh_primo ){
			cont_p++;
			printf("%d : %d\n", cont_p, x );
		}
	}
		
	return 0;
}
```
# Saída
```
/tmp/o5hJzK2ftZ.o
Digite A: 3
Digite B: 5
1 : 3
2 : 5
```
