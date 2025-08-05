// 8. Elabore uma função, com retorno, que recebe um valor inteiro maior ou igual a zero por parâmetro e retorna o fatorial de tal número. A função main deve receber e exibir o resultado.

#include <stdio.h>
#include <locale.h>

int fatorial(int n);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, f;
	printf("Informe um valor para retornar o fatorial: \n");
	scanf("%d", &n);
	if(n >= 0){
		f = fatorial(n);
		printf("%d! = %d", n, f);
	}
	else{
	 	printf("Não existe fatorial de um número negativo!");
	}
	return(0);
}

int fatorial(int n){
	int i, ft = 1;
	for(i = n; i >= 1; i--){
     	ft = ft * i;
	}
	return ft;
}