// 5. Construa uma função, sem retorno, que recebe um valor inteiro por parâmetro e informa se ele é, ou não, múltiplo de 5.

#include <stdio.h>
#include <locale.h>

void multiplo5(int m);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int m;
	printf("Informe um valor inteiro: \n");
	scanf("%d", &m);
	multiplo5(m);
	return(0);	
}

void multiplo5(int m){
	if(m % 5 == 0){
		printf("%d é múltiplo de 5!");
	}
	else{
		printf("%d não é múltiplo de 5!");
	}
}