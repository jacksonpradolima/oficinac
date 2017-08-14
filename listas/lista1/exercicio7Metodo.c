/*
    exercicio7.c
    Objetivo: Converter um número binário para decimal com o auxílio de função.

    @author Jackson Antonio do Prado Lima <jacksonpradolima at gmail dot com>
    @version 1.0 14/08/2017 
*/
#include <stdio.h>
#include <math.h>
int convertBynaryToDecimal(int bit);

int main(){
    // Solicita ao usuário informar um binário
    int bit;
    printf("Informe um binário: ");
    scanf("%d", &bit);
   
    // Mostra ao usuário o binário informado
    printf("Convertendo '%d' para decimal é igual a '%d'.\n",bit, convertBynaryToDecimal(bit));

    return 0;
}

/**
 * Converte um binário para decimal
 * 
 * @param bit Binário a ser convertido
 * @return Decimal que representa o binário informado
 */
int convertBynaryToDecimal(int bit){
    // Declara as variáveis
    int i = 0, decimal = 0, aux = 0;

    // Realiza a conversão até que todos os dígitos do binário seja lido
    while(bit!=0){
      // Descubro o primeiro dígito
      aux = bit%10;
          
      // Removo o dígito
      bit/=10;

      // Calculo o decimal
      decimal += aux*pow(2,i++);
    }
}