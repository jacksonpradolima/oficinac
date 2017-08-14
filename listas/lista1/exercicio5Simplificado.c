/*
    exercicio5Simplificado.c
    Objetivo: Inverter a ordem de um número.
    Nesse código é apresentado um exemplo utilizando apenas inteiros.

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
    int numeroInvertido = 0, aux = 0;    
        
    // Realiza a conversão até que todos os dígitos sejam lidos
    while(numero!=0){   
		// Descubro o primeiro dígito
	    aux = numero%10;	    

		if(aux == 0){
    		printf("O número informado possui um algarismo com zero. Todos os algarismos do número devem ser diferentes de 0.\n");
    		return 1;
	    } 	

        // Removo o dígito
        numero/=10;   

        numeroInvertido = numeroInvertido*10 + aux;  	    	
    }
       
	// Mostra ao usuário o resultado da conversão
    printf("O número invertido é '%d'.\n", numeroInvertido);    
    
    return 0;
}