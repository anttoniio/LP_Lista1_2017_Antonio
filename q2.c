#include <stdio.h>

int main (){

	int n;
	printf("Informe um numero inteiro:\n");
	scanf("%d",&n);
	
	if (n >= 1){
		
			if (n%2==0){
				
				printf("  %d^%d\n",2*n-1,2*n-1);
				printf("+ ----\n");
				printf("  %d^%d\n",2*n,2*n);
				
			}else{
				
				printf("  %d^%d\n",2*n-1,2*n-1);
				printf("* ----\n");
				printf("  %d^%d\n",2*n,2*n);
				
			}
		
	}else{
		
			printf("O numero deve ser maior ou igual a 1");
		
	}
}
