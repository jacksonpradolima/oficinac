/*
    exercicio9.c
    Objetivo: Mostra o percentual de votos brancos, nulos e válidos em relação ao número de eleitores de um município

    @author Jackson Antonio do Prado Lima <jacksonpradolima at gmail dot com>
    @version 1.0 14/08/2017 
*/
#include <stdio.h>

int main(){    
    // Declara as variáveis          
    int eleitores, votos_brancos, votos_nulos, votos_invalidos;

    // Solicita ao usuário informar o número de eleitores de um município, o número de votos brancos, nulos e válidos
    printf("Informe o número eleitores do município, o número de votos brancos, nulos e válidos: ");   
    scanf("%d%d%d%d", &eleitores, &votos_brancos, &votos_nulos, &votos_invalidos);

    // Mostra ao usuário o resultado
    printf("Votos brancos = %.2lf%% \nVotos nulos = %.2lf%% \nVotos inválidos = %.2lf%% \n",     	
    	((float)votos_brancos/eleitores)*100, 
    	((float)votos_nulos/eleitores)*100, 
    	((float)votos_invalidos/eleitores)*100);
    
    return 0;
}