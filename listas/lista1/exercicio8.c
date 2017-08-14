/*
    exercicio8.c
    Objetivo: Converter polegada em centímetros, sendo que, 1 polegada = 2.54cm.

    @author Jackson Antonio do Prado Lima <jacksonpradolima at gmail dot com>
    @version 1.0 14/08/2017 
*/
#include <stdio.h>

int main(){    
    // Declara as variáveis          
    int numero;
    
    // Valor constante de 1 polegada em centímetros
    const float pol = 2.54;

    // Solicita ao usuário informar um número em polegadas
    printf("Informe um número em polegadas: ");   
    scanf("%d", &numero);

    // Mostra ao usuário o resultado
    printf("'%d' polegadas é igual a '%.2lf' centímetros \n", numero, numero*pol);
    
    return 0;
}