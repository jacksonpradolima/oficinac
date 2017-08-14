/*
    exercicio9.c
    Objetivo: Realizar o cálculo de dois valores dado uma operação informada pelo usuário.

    Operações: 
    1. adição; 
    2. subtração; 
    3. multiplicação;
    4. divisão.

    @author Jackson Antonio do Prado Lima <jacksonpradolima at gmail dot com>
    @version 1.0 14/08/2017 
*/
#include <stdio.h>

int main(){    
    // Declara as variáveis          
    double valor1, valor2;
    int operacao;

    // Solicita ao usuário informar os dois valores
    printf("Informe dois valores: ");   
    scanf("%lf %lf", &valor1, &valor2);

    // Solicita ao usuário informar a operação desejada
    printf("\nQual operação deseja aplicar aos valores informados?\n1) Adição\n2) Subtração\n3) Multiplicação\n4) Divisão\n\nOperação: ");
    scanf("%d", &operacao);

    // Dada a operação informada aplicado a operação correspondente
    switch(operacao){
    	case 1:
    		printf("%lf + %lf = %lf\n", valor1, valor2, valor1 + valor2);
    		break;
    	case 2:
    		printf("%lf - %lf = %lf\n", valor1, valor2, valor1 - valor2);
    		break;
		case 3:
    		printf("%lf * %lf = %lf\n", valor1, valor2, valor1 * valor2);
    		break;
        case 4:
            printf("%lf / %lf = %lf\n", valor1, valor2, valor1 / valor2);
            break;
		default: 
			printf("Operação inválida!\n");
    }    
    
    return 0;
}