#include "funcoes.h"

	int soma(int n1, int n2){
		return n1+n2;
	}
	int sub(int n1, int n2){
		return n1-n2;
	}
	int mult(int n1, int n2){
		return n1*n2;
	}
	float div(int n1, int n2){
		if(n2 == 0){
			printf("NAO E POSSIVEL DIVIDIR POR ZERO\n");
			return 0;
		} else{
			return (float)n1/n2;
		}
	}
