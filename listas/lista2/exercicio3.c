/*
    exercicio3.c
    Objetivo: Ler uma sequência de caracteres terminada por '$' e calcular: 
    - número de caracteres a lidos
    - número de caracteres e lidos
    - número de caracteres i lidos
    - número de caracteres o lidos
    - número de caracteres u lidos
    - número de vogais lidas
    - número de não vogais lido
    - número total de caracteres

    @author Jackson Antonio do Prado Lima <jacksonpradolima at gmail dot com>
    @version 1.0 14/08/2017 
*/
#include <stdio.h>

/**
 * Função auxiliar para mostrar mensagem ao usuário
 * 
 * @param message Mensagem sobre o tipo de caracteres a ser mostrado
 * @param total Total do tipo de caracteres a ser mostrado
 */
void printMessage(char *message, int total){
	printf("Total de '%s' = %d \n", message, total);
}

int main(){    
    char c;
    int a = 0, e = 0, i = 0, o = 0, u = 0, vogais = 0, total = 0;

    while((c=getchar())!='$'){
    	switch(c){
    		case 'a':
    			a++;
    			break;
			case 'e':
    			e++;
    			break;
			case 'i':
    			i++;
    			break;
			case 'o':
    			o++;
    			break;
			case 'u':
    			u++;
    			break;			
    	}

    	total++;
    }
	
	printMessage("a", a);
	printMessage("e", e);
	printMessage("i", i);
	printMessage("o", o);
	printMessage("u", u);

	vogais = a+e+i+o+u;

	printMessage("vogais", vogais);
	printMessage("não vogais", total - vogais);
	printMessage("caracteres", total);

    return 0;
}