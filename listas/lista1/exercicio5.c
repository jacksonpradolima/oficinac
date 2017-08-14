/*
    exercicio5.c
    Objetivo: Inverter a ordem de um número.
    Nesse código é apresentado um exemplo utilizando array.

    @author Jackson Antonio do Prado Lima <jacksonpradolima at gmail dot com>
    @version 1.0 14/08/2017 
*/
#include <stdio.h>
#include <math.h>

int main(){
    // Solicita ao usuário informar um número
    int numero;
    printf("Informe um número inteiro de três algarismos: ");

    // O número informado possui um limite de 3 algarismos
    scanf("%3d", &numero);

    printf("Invertendo o número '%d'... \n", numero);
      
    // Declara as variáveis          
    int i = 0, temp = 0;
    char aux[4];
        
    // Realiza a conversão até que todos os dígitos sejam lidos
    while(numero!=0){   
		// Descubro o primeiro dígito
	    temp = numero%10;	    

		if(temp == 0){
    		printf("O número informado possui um algarismo com zero. Todos os algarismos do número devem ser diferentes de 0.\n");
    		return 1;
	    } 	

		// Removo o dígito
      	numero/=10;
	    	    
	    // Cast usando tabela ASCII
      	aux[i++] = temp + 48;                	
    }
       
	// Mostra ao usuário o resultado da conversão
    printf("O número invertido é '%s'.\n", aux);    
    
    return 0;
}