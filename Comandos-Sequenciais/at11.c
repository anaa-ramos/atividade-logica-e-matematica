#include <stdio.h>
#include <locale.h>

	//Faça um algoritmo que auxiliara um funcionário de um caixa de supermercado. 
	//O algoritmo deverá receber como entrada o valor da compra do cliente e o valor pago pelo cliente, 
	//em seguida o algoritmo devera apresentar o troco da compra, de forma que o mesmo deve 
	//apresentar a quantidade de cedulas e moedas para compor o troco do cliente. 

	int main(){
		
		float valorcompra, valor, troco;
		int trococent, c100, c50, c20, c10, c5, m1, m50, m25, m10, m5, m01;
		
		setlocale(LC_ALL,"Portuguese");
		
		printf("Digite o valor da compra do cliente: R$");
		scanf("%f", &valorcompra);
		printf("Digite o valor pago pelo cliente: R$");
		scanf("%f", &valor);
		
		troco = valor - valorcompra;
		
		trococent = troco*100;
		
		c100 = trococent / 10000;
		trococent %= 10000;
		
		c50 = trococent / 5000;
		trococent %= 5000;
		
		c20 = trococent / 2000;
    	trococent %= 2000;
    	
  		c10 = trococent / 1000;
   		trococent %= 1000;

  		c5 = trococent / 500;
   		trococent %= 500;

    	m1 = trococent / 100;
    	trococent %= 100;

    	m50 = trococent / 50;
   		 trococent %= 50;
   		 
   		m25 = trococent / 25;
    	trococent %= 25;

    	m10 = trococent / 10;
    	trococent %= 10;

    	m5 = trococent / 5;
   	 	trococent %= 5;
	
    	m01 = trococent;

		printf(" A quantidade de cédulas e moedas para o troco do cliente é: \n");
		printf("Cédulas de 100: %d\n", c100);
		printf("Cédulas de 50: %d\n", c50);
		printf("Cédulas de 20: %d\n", c20);
		printf("Cédulas de 10: %d\n", c10);
		printf("Cédulas de 5: %d\n", c5);
		
		printf("Moedas de 1 real: %d\n", m1);
		printf("Moedas de 0,50: %d\n", m50);
		printf("Moedas de 0,25: %d\n", m25);
		printf("Moedas de 0,10: %d\n", m10);
		printf("Moedas de 0,05: %d\n", m5);
		printf("Moedas de 0,01: %d\n", m01);
		
		return 0;
	}
