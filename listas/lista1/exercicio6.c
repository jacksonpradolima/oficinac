/*
    exercicio6.c
    Objetivo: Determinar a soma e o produto de duas frações ordinárias, sendo que os valores são inteiros.    

    @author Jackson Antonio do Prado Lima <jacksonpradolima at gmail dot com>
    @version 1.0 14/08/2017 
*/
#include <stdio.h>

int main(){    
    // Declara as variáveis          
    int a = 0, b = 0, c = 0, d = 0;

    // Solicita ao usuário informar 4 números
    printf("Informe 4 inteiros: ");   
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("Calculando a soma e o produto das funções ordinárias (%d/%d) e (%d/%d)...\n", a, b, c, d);
    
    /*
    	Sendo a/b e c/d duas frações ordinárias, sua soma e produto são definidos como:

    	a/b + c/d = ad + bc / bd 
    	e
    	a/b * c/d = ac / bd

    */
    // Guarda em variáveis pra mostrar ao usuário de forma lúcida
    float soma1 = (a*d + b*c), soma2 = (b*d);   
    float produto1 = (a*c), produto2 = (b*d);

    // Mostra o resultado ao usuário
    printf("A soma '(%d/%d) + (%d/%d)' é igual a '(%d/%d)' ou '%.2lf'. \n", a, b, c, d, (int)soma1, (int)soma2, soma1/soma2);
    printf("O produto '(%d/%d) * (%d/%d)' é igual a '(%d/%d)' ou '%.2lf'. \n", a, b, c, d, (int)produto1, (int)produto2, produto1/produto2);
    
    return 0;
}