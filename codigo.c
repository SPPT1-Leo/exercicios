#include <stdio.h>

int main(){
	
		int numero, num;
		
		printf("Digite um número: ");
			scanf("%d", &numero);
		printf("Digite outro número: ");
			scanf("%d", &num);
		if(((numero%3 == 0) || (numero%5 == 0)) && ((num%3==0) || (num%5==0))){
			
			printf("Sim %d, %d", numero, num);
			
			}else{
				
				printf("Não");
				
				}
		return 0;
	}
