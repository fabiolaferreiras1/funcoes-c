// 1. Implemente uma função, sem retorno, que recebe um valor inteiro por parâmetro e informa se é, ou não, igual a zero.

#include <stdio.h>
#include <locale.h>

void nota(int n);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um valor inteiro: \n");
	scanf("%d", &n);
	nota(n);
	return(0);
}

void nota(int n){
	if(n != 0){
		printf("%d não é igual a 0!", n);
	}
	else{
		printf("%d é igual a 0!", n);
	}
}