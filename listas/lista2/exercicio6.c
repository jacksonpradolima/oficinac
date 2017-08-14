/*
    exercicio6.c
    Objetivo: Calcular e mostrar quais números entre 1 a 500 são números perfeitos. 

    Observação: Número perfeito é aquele cuja soma de seus divisores, exceto ele próprio, é igual ao
	número. Exemplo: 6 é perfeito porque 1 + 2 + 3 = 6.

    @author Jackson Antonio do Prado Lima <jacksonpradolima at gmail dot com>
    @version 1.0 14/08/2017 
*/
#include <stdio.h>

int main(){
	printf("Números perfeitos de 1 a 500: ");    

    for(int i = 1; i <= 500; i++)  {
    	// Reinicio a variável a cada nova iteração
    	int sum = 0;    	

    	// Comparo com todos os divisores inteiros positivos de i exceto o próprio i (j < i). 
    	for(int j = 1; j < i; j++){    		
    		if(i%j == 0){
    			sum+= j;
    		}
    	}

    	if(i == sum){    		
			printf("%d ", i);    		    		
    	}
    }
   	
   	printf("\n");
   	
    return 0;
}