// 7. Faça uma função, com retorno, para calcular o volume de uma caixa retangular, utilizando a fórmula: v = c * l * a
// Obs.: os valores do comprimento, da largura e da altura devem ser fornecidos pelo usuário e devem ser passados como argumento para a função. 
// A função main deve receber e exibir o resultado do cálculo.

#include <stdio.h>
#include <locale.h>

float volume(float c, float l, float a);

int main(){
	setlocale(LC_ALL,"Portuguese");
	float v, c, l, a;
	printf("Informe o comprimento da caixa: \n");
	scanf("%f", &c);
	printf("Informe a largura da caixa: \n");
	scanf("%f", &l);
	printf("Informe a altura da caixa: \n");
	scanf("%f", &a);
	v = volume(c, l, a);
	printf("O volume dessa caixa retangular é: %.2f", v);
	return(0);
}

float volume(float c, float l, float a){
	return c * l * a;
}