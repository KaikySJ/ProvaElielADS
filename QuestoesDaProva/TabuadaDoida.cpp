#include <stdio.h>

int main(){
		
	int num;
	int resultado;
	
	printf("Tabuada top, digita um numero ai\n");
	scanf("%d", &num);
	
	for(int i = 1; i <= 10; i++){
		resultado = num * i;		
		
		if(resultado == 20){
			continue;
		}
		if(resultado == 40){
			break;
		}
		
		printf("%d x %d = %d\n",num, i, resultado);
		
		
	}
	
	
	return 0;
}
