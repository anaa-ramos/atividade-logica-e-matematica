#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL,"Portuguese");
		
	//Fazer um algoritmo que calcule a media aritmética dos números 7, 8 e 9 e a média
	//nos numeros 4, 5 e 6. Mostre a soma das duas médias e a média das méedias.
	
	float media1, media2, soma, mediamedia;
	
	media1 = (4+5+6)/3;
	media2 = (7+8+9)/3;
	soma = media1+ media2;
	mediamedia = (media1+media2)/2;
	
	
	printf("A média dos números 4, 5 e 6 é: %.2f\n",media1);
	printf("A média aritmética dos números 7, 8 e 9 é: %.2f\n",media2);
	printf("A soma das duas médias é: %.2f\n",soma);
	printf("A média das médias é: %.2f\n", mediamedia);
	
	return 0;
	}
