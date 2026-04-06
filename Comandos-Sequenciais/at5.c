#include <stdio.h>
#include <locale.h>

// Fazer um algoritmo que converta centímetro para polegadas.

	int main()
	{
		setlocale(LC_ALL, "Potuguese");
		
		float vcm, conv;
		
		printf("Escreva em cm o valor que você quer converter para polegadas: ");
		scanf("%f", &vcm);
		conv= vcm/2.54;
		
		printf("O valor %.2f cm em polegadas é: %.2f", vcm, conv);
		return 0;
	}
