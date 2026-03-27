#include <stdio.h>
#include <locale.h>

// Fazer um algoritmo que obtenha dois números inteiros, x e y, mostre o quociente e o resto da divisão inteira entre eles.

	int main()
	{
		setlocale(LC_ALL, "Portuguese");
		int div1, div2;
		printf("Digite o valor do dividendo: \n");
		scanf("%d", &div1);
		printf("Digite o valor do divisor: \n");
		scanf("%d", &div2);
		
		printf("O resultado da divisão é: %d\n", div1/div2);
		
		int resto= div1%div2;
		printf("o resto da divisão é: %d\n", resto);
		
		return 0;
	}
