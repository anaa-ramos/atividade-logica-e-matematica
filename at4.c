#include <stdio.h>
#include <locale.h>

// Fazer um algoritmo que calcule e mostre a soma entre dois números, o produto entre eles e o quociente entre eles.

	int main()
	{
		setlocale(LC_ALL, "Portuguese");
		int x, y, soma, mult, div;
		
		printf("Digite o primeiro número: ");
		scanf("%i", &x);
		printf("Digite o segundo número: ");
		scanf("%i", &y);
		
		soma= x+y;
		mult= x*y;
		div= x/y;
		
		printf("O resultado da soma é: %i \n da multiplicação é: %i \n da divisão é: %i \n", soma, mult, div);
		
		return 0;
	}
