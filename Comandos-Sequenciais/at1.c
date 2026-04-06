#include <stdio.h>

// Faça um algortimo que recebe dois valores inteiros e mostra o resultado da multiplicação

int main(){
	
	int valor, valor2, result;
	printf("digite o primeiro valor: ");
	scanf("%i", &valor);
	
	printf("digite o segundo valor: ");
	scanf ("%i", &valor2);
	
	result = valor*valor2;
	printf("o resultado e: %i", result);
	
	return 0;
	
}
