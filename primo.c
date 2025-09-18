#include <stdio.h>

void main(){
	int n, cont=0, i;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		if(n%i==0){
			cont++;
		}
	}
	if(cont == 2){
		printf("O numero %d eh primo.", n);
	}
	else{
		printf("O numero %d nao eh primo.", n);
	}
}
