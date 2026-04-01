#include <stdio.h>
#include <locale.h>
#define PI 3.14159265359

	int main(){
		
		float raio, altura, areac, volume;
		setlocale(LC_ALL, "Portuguese");
		
		printf("Digite o valor do raio do cilindro: ");
		scanf("%f",&raio);
		printf("Digite o valor da altura do cilindro: ");
		scanf("%f", &altura);
		
		areac= 2*PI*raio*(altura+raio);
		volume= PI*(raio*raio)*altura;
		
		printf("O valor da area do cilindro é: %f \n",areac);
		printf("O valor do volume do cilindro é: %f \n", volume);
	
		return 0;
		
	}
