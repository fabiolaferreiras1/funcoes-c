// 9. Crie uma função, com retorno, que recebe três notas por parâmetro e calcula a média aritmética de um aluno. 
// Crie outra função, sem retorno, que recebe a média aritmética por parâmetro e informa o conceito obtido pelo aluno.

#include <stdio.h>
#include <locale.h>

float media(float n1, float n2, float n3);
void conceito(float m);

int main(){
	setlocale(LC_ALL, "Portuguese");
	float m, n1, n2, n3;
	printf("Informe a sua nota 1: \n");
	scanf("%f", &n1);
	printf("Informe a sua nota 2: \n");
	scanf("%f", &n2);
	printf("Informe a sua nota 3: \n");
	scanf("%f", &n3);
	m = media(n1, n2, n3);
	printf("A sua média aritmética foi: %.1f. \n", m);
	conceito(m);
	return(0);	
}

float media(float n1, float n2, float n3){
	return (n1 + n2 + n3) / 3;
}

void conceito(float m){
	if(m >= 9){
		printf("A sua média conceito foi: A. \n");	
	}
	else{
		if(m >= 7 && m < 9){
			printf("A sua média conceito foi: B. \n");
		}
		else{
			if(m >= 6 && m < 7){
				printf("A sua média conceito foi: C. \n");
			}
			else{
				if(m >= 4 && m < 6){
					printf("A sua média conceito foi: D. \n");
				}
				else{
					printf("A sua média conceito foi: E. \n");
				}
			}
		}
	}
}