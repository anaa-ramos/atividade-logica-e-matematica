#include <stdio.h>
#include <locale.h>
#define PI 3.14159265359

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		float raio, area;
		
		printf("Dgite o valor do raio do círculo: ");
		scanf("%f", &raio);
		
		area = (raio*raio)*PI;
		
		printf("O valor da área do círculo é: %f", area);
		
		return 0;
		
	}
