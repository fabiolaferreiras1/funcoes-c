// Faça uma função, sem retorno, que recebe a idade do usuário por parâmetro, verifica e informa se ele é maior ou menor de idade.

#include <stdio.h>
#include <locale.h>

void idade(int i);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	printf("Informe sua idade: \n");
	scanf("%d", &i);
	idade(i);
	return(0);
}

void idade(int i){
	if(i >= 18){
		printf("Você é maior de idade!");
	}
	else{
		printf("Você é menor de idade!");
	}
}