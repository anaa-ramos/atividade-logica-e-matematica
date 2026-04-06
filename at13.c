#include <stdio.h>
#include <locale.h>

		//O preço de um automovel é calculado pela soma do preço de fábrica, o preço dos
		//impostos (45% do preço de fábrica) e a porcentagem do revendedor (28% do preço de fábrica). 
		//Fazer um algoritmo que leia o preço de fábrica. Calcule e mostre o preço final do carro.

	int main(){
		
		setlocale(LC_ALL,"Portuguese");
		
		float precoauto, impostos, revendedor, precofinal;
		
		printf("Digite o valor do preço de fábrica do automóvel: R$");
		scanf("%f", &precoauto);
		
		impostos = 0.45*precoauto;
		revendedor = 0.28*precoauto;
		precofinal = impostos + revendedor + precoauto;
		
		printf("O preço final do carro é: R$ %.2f ", precofinal);
		
	}
