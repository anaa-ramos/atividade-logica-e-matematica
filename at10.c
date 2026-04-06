#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Faça um algoritmo que mostra a quantidade de cedulas de um caixa eletrônico de um banco.
// O algoritmo recebe como entrada o valor inteiro a ser sacado pelo cliente, em seguida
//apresente a quantidade de cada cedula que o cliente deverá receber, de forma que a quantidade
//de cedulas seja o menor possível.

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor, c200, c100, c50, c20, c10, c5; 
	//c é igual a cédula
	
	printf("Digite o valor do saque: R$ ");
	scanf("%d", &valor);
	
	c200 = valor / 200;
	valor = valor % 200;
	c100 = valor / 100;
	valor = valor % 100;
	c50 = valor / 50;
	valor = valor % 50;
	c20 = valor / 20;
	valor = valor % 20;
	c10 = valor/ 10;
	valor = valor % 10;
	c5 = valor / 5;
	valor = valor % 5;
	
	printf("A quantidade de cédulas de cada nota: é: \n");
	printf(" Cédulas de 200: %d \n",c200);
	printf(" Cédulas de 100: %d \n",c100);
	printf(" Cédulas de 50: %d \n",c50);
	printf(" Cédulas de 20: %d \n",c20);
	printf(" Cédulas de 10: %d \n",c10);
	printf(" Cédulas de 5: %d \n",c5);
	
	return 0;
}
