/*
    exercicio4.c
    Objetivo: Imprimir a soma do n primeiro números pares positivos, sendo n inteiro e positivo.

    @author Jackson Antonio do Prado Lima <jacksonpradolima at gmail dot com>
    @version 1.0 14/08/2017 
*/
#include <stdio.h>

int main(){    
    // Declara as variáveis          
    int numero;
    long total = 0;
    
    // Solicita ao usuário informar um número
	printf("Informe um número: ");
	scanf("%d", &numero);

	// Soma os 'n' primeiros números se forem positivos e pares.
	// Nesse exemplo utilizo 'if ternário'	
	for(int i = 0; i <= numero; total += (i%2 == 0 ? i : 0), i++);

    printf("Total = %ld \n", total);
    
    return 0;
}