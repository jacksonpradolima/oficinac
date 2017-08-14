/*
    exercicio1.c
    Objetivo: Ler o número de lados de um polígono regular e a medida do lado, posteriormente calcular e mostrar:
    - Se o número for igual a 3 escrever que Formam um triângulo e imprimir também seu perímetro;
	- Se o número for igual a 4 escrever que Formam um quadrado e imprimir o valor de sua área;
	- Se o número for igual a 5 escrever que Formam um pentágono;
	- Se o número for maior que 5 escrever Polígono não identificado;
	- Se o número for menor  que 3 escrever Não formam um polígono.

	Observação: Um polígono diz-se regular se tiver todos os seus lados e ângulos iguais, sejam eles internos ou externos.
	Todo polígono regular pode ser inscrito em uma circunferência.

    @author Jackson Antonio do Prado Lima <jacksonpradolima at gmail dot com>
    @version 1.0 14/08/2017 
*/
#include <stdio.h>

/**
 * Função auxiliar para mostrar ao usuário o tipo de polígono e seu perímetro
 * 
 * @param tipo Tipo de polígono 
 * @param numero_lados Número de lados do polígono
 * @param comprimento_lado Comprimento de cada lado do polígono
 */
void printPoligono(char tipo[], int numero_lados, float comprimento_lado){
	printf("O número de lados informados forma um '%s' com perímetro %.2lf \n", tipo, numero_lados*comprimento_lado);
}

int main(){    
    // Declara as variáveis          
    int numero_lados;
    float comprimento_lado;

    // Solicita ao usuário informar o número de lados e a medida do lado
    printf("Informe o número de lados e a medida do lado: ");   
    scanf("%d %f", &numero_lados, &comprimento_lado);

    // Utilizo o 'switch' ao invés de vários 'if/else'
    switch(numero_lados){
    	case 3:
    		printPoligono("triângulo", numero_lados, comprimento_lado);
    		break;
    	case 4:
    		printPoligono("quadrado", numero_lados, comprimento_lado);    		
    		break;
		case 5:
    		printPoligono("pentágono", numero_lados, comprimento_lado);
    		break;
		default: 
			// Como apenas 2 casos não são iguais a valores fixos, eu trato no default
			if(numero_lados < 3){
				printf("O número de lados informados não formam um polígono! \n");

			}else{
				printf("Polígono não identificado! \n");
			}

			break;
    }    
    
    return 0;
}