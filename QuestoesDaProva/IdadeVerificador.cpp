#include <stdio.h>

int main(){
	int idade;
	printf("Escreva sua idade\n");
	scanf("%d", &idade);
	
	if(idade < 0){
		printf("Idade invalida fi");
		return 1;
	}
	
	if(idade < 12){
		printf("Crianca");
	}else if(idade > 12 && idade <= 17){
		printf("Adolescente");
	}else if(idade >17 && idade <= 59){
		printf("Adulto");
	}else{
		printf("Idoso");
	}
	
	
}
