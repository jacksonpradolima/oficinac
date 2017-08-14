/*
    exercicio2.c
    Objetivo: Ler uma coordenada (x,y) de um sistema cartesiano e informar qual quadrante pertence, 
    se ele estiver sobre os eixos ou origem informar ao usuário que ele não pertence a nenhum quadrante.
    
    @author Jackson Antonio do Prado Lima <jacksonpradolima at gmail dot com>
    @version 1.0 14/08/2017 
*/
#include <stdio.h>

void printQuadrante(char *quadrante){
	printf("As coordenadas pertencem ao '%s' quadrante.\n", quadrante);
}

int main(){    
    // Declara as variáveis          
    int x, y;    

    // Solicita ao usuário informar as coordenadas
    printf("Informe as coordenadas x e y: ");   
    scanf("%d%d", &x, &y);

    if(x == 0 && y == 0){
    	printf("As coordenadas não pertencem a nenhum quadrante.");
    }else if(x > 0 && y > 0){
    	printQuadrante("primeiro");
    } else if(x < 0 && y > 0){
    	printQuadrante("segundo");
    } else if(x < 0 && y < 0){
    	printQuadrante("terceiro");
    }else{
    	printQuadrante("quarto");
    }
    
    return 0;
}
