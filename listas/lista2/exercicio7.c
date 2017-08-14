/*
    exercicio7.c
    Objetivo: Verificar quais números inteiros positivos menores que 10.000 são palíndromos.

    @author Jackson Antonio do Prado Lima <jacksonpradolima at gmail dot com>
    @version 1.0 14/08/2017 
*/
#include <stdio.h>

/**
 * Função que inverte um número
 * 
 * @param n Número a ser invertido
 * @return Número invertido
 */
int inverteNumero(int n){
	int inverso = 0, aux = 0;

	while(n != 0){
		aux = n%10;
		inverso = (inverso * 10) + aux;
		n /= 10;
	}

	return inverso;
}

int main(){ 
	printf("Números inteiros positivos menores que 10.000 que são palíndromos:\n");   

    for(int i = 10; i < 10000; i++){
    	// Inverto o número e comparo se o original e o invertido são iguais
    	if(i == inverteNumero(i)){  
    		// Utilizo um 'if ternário' para mostrar uma saída mais adequada ao usuário, separando por vírgula os números. 
    		// Não coloco vírgula apenas no último número.
    		printf("%d%c ", i, (i + 1 == 10000 ? '\n' : ','));
    	}    	
    }    

    return 0;
}