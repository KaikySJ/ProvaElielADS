#include<stdio.h>

int soma(int numUm, int numDois){
	return numUm + numDois;
}


int subtracao(int numUm, int numDois){
	return numUm - numDois;
}

int divisao(int numUm, int numDois){
	return numUm / numDois;
}

int multiplicacao(int numUm, int numDois){
	return numUm * numDois;
}


int main(){
	int opcao;
	int numUm = 0;
	int numDois = 0;
	
	printf("Bem vindo a calculadora oba\nEscolha alguma operacao ai\n1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n");
	scanf("%d", &opcao);
	
	printf("Escolha o primeiro numero!\n");
	scanf("%d", &numUm);
	
	printf("Escolha o segundo numero!\n");
	scanf("%d", &numDois);
	
	switch(opcao){
		case 1:
			printf("O resultado da soma e: %d", soma(numUm, numDois));
		break;	
		case 2:
			printf("O resultado da subtracao e: %d", subtracao(numUm, numDois));
			break;
		case 3:
			printf("O resultado da multiplicacao e: %d", multiplicacao(numUm, numDois));
			break;
		case 4:
			if(numUm == 0 || numDois == 0){
				printf("Nao e possivel dividir por 0");
				return 1;
			}
			
			printf("O resultado da divisao e: %d", divisao(numUm, numDois));		
	}
	
	return 0;
}
