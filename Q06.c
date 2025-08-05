// 6. Elabore uma função, com retorno, que calcula a área de um círculo. Para isto, utilize a fórmula do círculo.
// Obs.: o valor do raio deve ser fornecido pelo usuário e deve ser passado como argumento para a função. A função main deve receber e exibir o resultado do cálculo.

#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.14

float areacircle(float r);

int main(){
	setlocale(LC_ALL, "Portuguese");
	float r, a;
	printf("Informe o raio do círculo: \n");
	scanf("%f", &r);
	a = areacircle(r);
	printf("A área desse círculo é: %.2f \n", a);
	return(0);
}

float areacircle(float r){
	return PI * pow(r, 2);
}