// 3. Faça uma função, sem retorno, que recebe um valor inteiro por parâmetro, verifica e informa se tal número é par ou ímpar.

#include <stdio.h>
#include <locale.h>

void numero(int n);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um valor inteiro: \n");
	scanf("%d", &n);
	numero(n);
	return(0);	
}

void numero(int n){
	if(n % 2 == 0){
		printf("%d é par!", n);
	}
	else{
		printf("%d é ímpar!", n);
	}
}