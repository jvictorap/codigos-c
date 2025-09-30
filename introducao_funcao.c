# include <stdio.h>


float novo_preco(int preco){
	float novo_preco;
	novo_preco = preco * 0.9;
	
	return novo_preco;
}

void main(){
	
	float p, novo;
	
	printf("digite o valor do produto: ");
	scanf("%f", &p);
	
	novo = novo_preco(p);
	
	printf("O novo preco he : %.2f reais", novo);
}      
