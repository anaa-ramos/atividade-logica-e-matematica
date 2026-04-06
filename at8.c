#include <stdio.h>
#include <locale.h>

	//Escreva um algoritmo que recebe o valor do salário fico e o total de vendas efetuadas por um vendedor de uma loja durante o mês(em dinheiro). 
   //Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o salário fico e o salário no final do mês.

	int main(){
		
		setlocale(LC_ALL,"Portuguese");
		float salario, valor, comissao, salariof;
		int vendas;
		
		printf("Digite o valor do seu salário: ");
		scanf("%f",&salario);
		printf("Digite a quantidade de vendas: ");
		scanf("%d",&vendas);
		
		comissao= vendas*0.15;
		salariof= comissao+salario;
		
		printf("O salário fixo é: %f \n", salario);
		printf("O salário no final do mês é: %f", salariof);
		
		
		return 0;
		
	}
