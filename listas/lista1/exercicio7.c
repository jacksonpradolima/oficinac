/*
    exercicio7.c
    Objetivo: Converter um número binário para decimal

    @author Jackson Antonio do Prado Lima <jacksonpradolima at gmail dot com>
    @version 1.0 14/08/2017 
*/
#include <stdio.h>
#include <math.h>

int main(){
    // Solicita ao usuário informar um binário
    int bit;
    printf("Informe um binário: ");
    scanf("%d", &bit);
   
    // Mostra ao usuário o binário informado
    printf("Convertendo '%d' para decimal",bit);
    
    // Declara as variáveis
    int i = 0, decimal = 0, aux = 0;
    double pow_aux = 0.0;
    
    // Realiza a conversão até que todos os dígitos do binário seja lido
    while(bit!=0){
      // Descubro o primeiro dígito
      aux = bit%10;
          
      // Removo o dígito
      bit/=10;
      
      // Calculo a potencia atual
      pow_aux = pow(2,i);
      
      // Calculo o decimal
      decimal += aux*pow_aux;

      // Incremento o i
      i++;    
    }

    // Mostro o resultado da conversão
    printf(" é igual a '%d'.\n", decimal);
    
    return 0;
}