/*
    exercicio8.c
    Objetivo: Determinar quantos segmentos de números iguais consecutivos compõem uma determinada sequência

    Exemplo:  5, 2, 2, 3, 4, 4, 4, 4, 1, 1, possui 5 segmentos de números iguais.

    @author Jackson Antonio do Prado Lima <jacksonpradolima at gmail dot com>
    @version 1.0 14/08/2017 
*/
#include <stdio.h>

int main(){    
    // Declaro as variáveis
    int segmentos = 0;
    long aux = 0, n = 0;

    printf("Informe um número inteiro positivo: ");
    scanf("%ld", &n);

    for(int i = 0; n != 0; i++){    			
    	// Considero que há um novo segmento
    	segmentos++;
		
    	// Não é a primeira leitura e o valor atual é igual ao anterior    	
    	if(i != 0 && aux == n%10){
    		// Desconsidero o novo segmento
			segmentos--;    			
    	}
    	    
	    // Guardo o dígito atual para ser comparado posteriormente
    	aux = n%10;			

    	// Passo para o próximo dígito
		n /= 10;	
	}

	printf("O número informado possui %d segmentos.\n", segmentos);

    return 0;
}