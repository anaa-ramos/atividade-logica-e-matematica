#include <stdio.h>
#include <locale.h>

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
