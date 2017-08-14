/*
    exercicio5.c
    Objetivo: Calcular o número Neperiano (e) considerando apenas 20 termos.

	Observação: Sabe-se que o número Neperiano e = 2.718281... (que é um número irracional) pode ser
	calculado pela soma dos valores de uma série infinita, como mostrado abaixo:

        1   1   1   1   1   1
    e = - + - + - + - + - + - + ...
        0!  1!  2!  3!  4!  5!
  	
    @author Jackson Antonio do Prado Lima <jacksonpradolima at gmail dot com>
    @version 1.0 14/08/2017 
*/
#include <stdio.h>

long int fatorial(int n);

int main(){    
    double e = 0;

    for(int i = 0; i < 20; i++){
    	e += 1.0 / fatorial(i);
    }
    
    printf("e = %.10lf \n", e);
    
    return 0;
}

/**
 * Função que calcula o fatorial de um valor 'n' de modo recursivo
 * 
 * @param n Fatorial a ser calculado 
 * @return Fatorial de 'n'
 */
long int fatorial(int n){
	if(n > 1)
		return n * fatorial(n-1);	

	return 1;
}