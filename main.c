#include <stdio.h>
#include "funcoes.h"

int main(){
	
	int operador, n1, n2;
		
	printf("-----------------------\n");
	printf("CALCULADORA\n");	
	printf("-----------------------\n");
	printf("1-ADICAO\n");
	printf("2-SUBTRACAO\n");
	printf("3-MULTIPLICACAO\n");
	printf("4-DIVISAO\n");
	printf("-----------------------\n");
	printf("ESCOLHA UM OPERADOR: \n");
	scanf("%d", &operador);
	printf("\n");
	
	if(operador<1 || operador>4){
		printf("OPCAO INVALIDA");
		return 0;
	}
	
	printf("PRIMEIRO NUMERO: ");
	scanf("%d", &n1);
	printf("\n");
	printf("SEGUNDO NUMERO: ");
	scanf("%d", &n2);
	
	switch (operador){
		
		case 1:
			printf("RESULTADO: %d\n", soma(n1, n2));
			break;
		case 2:
			printf("RESULTADO: %d\n", sub(n1, n2));
			break;
		case 3:
			printf("RESULTADO: %d\n", mult(n1, n2));
			break;
		case 4:
			printf("RESULTADO: %.2f\n", div(n1, n2));
			break;
	}
	return 0;
}
