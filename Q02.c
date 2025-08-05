// 2. Crie uma função, sem retorno, que recebe um valor inteiro por parâmetro e informa se ele é positivo, negativo ou neutro.

#include <stdio.h>
#include <locale.h>

void verifica(int n);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um número inteiro: \n");
	scanf("%d", &n);
	verifica(n);
	return(0);
}

void verifica(int n){
	if(n == 0){
		printf("0 é neutro!");
	}
	else{
		if(n > 0){
			printf("%d é positivo!", n);
		}
		else{
			printf("%d é negativo!", n);
		}
	}
}