#include <stdio.h>

void main(){
	
	int j, i, n, resultado=1;
	
	for(j=1; j<=2; j++){
		printf("Digite um numero: ");
		scanf("%d", &n);
		
		for(i=1; i<=n; i++){
			resultado *= i;
		}
		printf("O fatorial de %d eh %d\n", n, resultado);
		
		resultado = 1;
		i = 1;
	}

}
