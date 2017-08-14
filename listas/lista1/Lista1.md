# LISTA DE EXERCÍCIOS SOBRE OPERADORES
## Exercícios resolvidos

> ATENÇÃO ao utilizar a biblioteca math.h deve-se passar o parâmetro -lm ao gcc!

### Questão 5

Dado um número inteiro de 3 algarismos, inverta a ordem de seus algarismos, sabendo que os três algarismos do número são diferentes de 0.

```C
#include <stdio.h>

int main(){
    // Solicita ao usuário informar um número
    int numero;
    printf("Informe um número inteiro de três algarismos: ");

    // O número informado possui um limite de 3 algarismos
    scanf("%3d", &numero);

    printf("Invertendo o número '%d'... \n", numero);
      
    // Declara as variáveis          
    int i = 0, temp = 0;
    char aux[4];
        
    // Realiza a conversão até que todos os dígitos sejam lidos
    while(numero!=0){   
    // Descubro o primeiro dígito
      temp = numero%10;     

    if(temp == 0){
        printf("O número informado possui um algarismo com zero. Todos os algarismos do número devem ser diferentes de 0.\n");
        return 1;
      }   

    // Removo o dígito
        numero/=10;
            
      // Cast usando tabela ASCII
        aux[i++] = temp + 48;                 
    }
       
  // Mostra ao usuário o resultado da conversão
    printf("O número invertido é '%s'.\n", aux);    
    
    return 0;
}
```

### Questão 6

Dadas duas frações ordinárias a/b e c/d, sendo a, b, c e d inteiros, determinar a sua soma e o seu produto.

```C
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
```

### Questão 7

Dado um número inteiro que representa um número binário de cinco dígitos, determinar o seu equivalente em decimal.

```C
#include <stdio.h>
#include <math.h>

int main(){
    // Solicita ao usuário informar um binário
    int bit;
    printf("Informe um binário: \n");
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
    printf(" é igual a '%d'", decimal);
    
    return 0;
}
```
Para executar o código on-line clique [aqui](https://repl.it/KHUY/3).

### Questão 8

Escreva um algoritmo que transforme polegadas em centímetros. Dado 1pol = 2.54 cm.

```C
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
```

### Questão 9

Escreva um algoritmo para ler o número de eleitores de um município, o número de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.

```C
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
```