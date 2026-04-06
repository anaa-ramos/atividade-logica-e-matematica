#include <stdio.h>
#include <locale.h>

//Ler dois valores para as variaveis A e B, e efetuar as trocas dos valores de forma que a variavel A passe a possuir 
//o valor da variavel B e a variavel B passe a possuir o valor da variavel A. Apresentar os valores trocados.

	int main(){
	
			setlocale(LC_ALL,"Portuguese");
		int a,b, troca;
		
		printf("Digite o primeiro valor: ");
		scanf("%d",&a);
		printf("Digite o segundo valor: ");
		scanf("%d",&b);
		
		troca= a;
	    a= b;
		b= troca;
		
		printf("O valor de A é: %d \n", a);
		printf("O valor de B é: %d", b);
		
		
		return 0;
		
	}
