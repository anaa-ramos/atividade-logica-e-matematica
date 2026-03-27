#include <stdio.h>

int main(){
	
	int num, ant, sus;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	sus= num+1;
	ant= num-1;
	
	printf("O antecessor e o sucessor do numero %i e %i e o o sucessor e %i",num, ant,sus);
	return 0;
}