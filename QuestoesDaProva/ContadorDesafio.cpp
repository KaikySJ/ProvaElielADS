#include <stdio.h>

int main(){
	
	int contador = 0;
	
	for(int i =0; i<=50; i++){
		if(i == 30){
			break;
		}
	
		if(i % 5 ==0){
			printf("MULTIPLO DE 5\n");
			continue;
		}
		
		if(i % 2 == 0){
			printf("PAR\n");
		}else{
			printf("IMPAR\n");
		}
		
		contador++;
	}
	
	printf("total de numeros verificados foram: %d", contador);
	
	return 0;
}
