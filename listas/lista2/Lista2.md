# LISTA DE EXERCÍCIOS SOBRE COMANDOS
## Exercícios resolvidos

### Questão 1 

Escreva um programa para ler o número de lados de um polígono regular e a medida do lado. Calcular e imprimir o seguinte:

- Se o número for igual a 3 escrever  que Formam um triângulo e imprimir também seu perímetro.

- Se o número for igual a 4 escrever  que Formam um quadrado  e  imprimir o valor de sua área.

- Se o número for igual a 5 escrever  que Formam um pentágono.

- Se o número for maior que 5 escrever Polígono não identificado.

- Se o número for menor  que 3 escrever Não formam um polígono.

```C
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
```

### Questão 2

Escreva um algoritmo para ler as coordenadas (x,y) de um ponto no sistema cartesiano e escreva a qual quadrante o ponto pertence, se ele estiver sobre os eixos ou origem escrever que ele não pertence a nenhum quadrante.

```C
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

```

### Questão 3

Ler uma sequência de caracteres terminada por '$' e calcular: número de caracteres a lidos, ne: número de caractere e lidos, ni número de caracteres i lidos, no:  número de caracteres o lidos, nu: número de caracteres u lidos, nv: número de vogais lidas, nnv: número de não vogais lido; nc número total de caracteres.

```C
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
```

### Questão 4

Imprimir a soma do n primeiro números pares positivos, sendo n inteiro o e positivo.

```C
#include <stdio.h>

int main(){    
    // Declara as variáveis          
    int numero;
    long total = 0;
    
    // Solicita ao usuário informar um número
	printf("Informe um número: ");
	scanf("%d", &numero);

	// Soma os 'n' primeiros números se forem positivos e pares.
	// Nesse exemplo utilizo 'if ternário'	
	for(int i = 0; i <= numero; total += (i%2 == 0 ? i : 0), i++);

    printf("Total = %ld \n", total);
    
    return 0;
}
```

### Questão 5

Sabe-se que o número e = 2.718281... pode ser calculado através da série infinita dada abaixo:

	1   1   1   1   1   1
e = - + - + - + - + - + - + ...
    0!  1!  2!  3!  4!  5!

Fazer um programa em C que calcule este número de acordo com a série acima, considerando apenas 20 termos a serem somados. Formate a saída do seu programa. 

```C
#include <stdio.h>

long int fatorial(int n);

int main(){    
    double e = 0;

    for(int i = 0; i < 20; i++){
    	e += 1.0 / fatorial(i);
    }
    
    printf("e = %.10lf \n", e);
    
    return 0;
}

/**
 * Função que calcula o fatorial de um valor 'n' de modo recursivo
 * 
 * @param n Fatorial a ser calculado 
 * @return Fatorial de 'n'
 */
long int fatorial(int n){
	if(n > 1)
		return n * fatorial(n-1);	

	return 1;
}
```

### Questão 6

Fazer um programa que dados os  números inteiros positivos de 1 a 500, calcule e imprima os que são números perfeitos. 

Nota: Número perfeito é aquele cuja soma de seus divisores, exceto ele próprio, é igual ao número.  

Exemplo: 6 é perfeito porque 1 + 2 + 3 = 6.

```C
#include <stdio.h>

int main(){
	printf("Números perfeitos de 1 a 500: ");    

    for(int i = 1; i <= 500; i++)  {
    	// Reinicio a variável a cada nova iteração
    	int sum = 0;    	

    	// Comparo com todos os divisores inteiros positivos de i exceto o próprio i (j < i). 
    	for(int j = 1; j < i; j++){    		
    		if(i%j == 0){
    			sum+= j;
    		}
    	}

    	if(i == sum){    		
			printf("%d ", i);    		    		
    	}
    }
   	
   	printf("\n");
   	
    return 0;
}
```

### Questão 7

Capicuas (ou palíndromos) são números naturais que têm o mesmo valor, se lidos da esquerda para a direita ou da direita para a esquerda. Ex.; 44, 232, etc.  Fazer um programa para determinar e escrever todos os números inteiros positivos menores que 10.000 que são capicuas.

```C
#include <stdio.h>

/**
 * Função que inverte um número
 * 
 * @param n Número a ser invertido
 * @return Número invertido
 */
int inverteNumero(int n){
	int inverso = 0, aux = 0;

	while(n != 0){
		aux = n%10;
		inverso = (inverso * 10) + aux;
		n /= 10;
	}

	return inverso;
}

int main(){ 
	printf("Números inteiros positivos menores que 10.000 que são palíndromos:\n");   

    for(int i = 10; i < 10000; i++){
    	// Inverto o número e comparo se o original e o invertido são iguais
    	if(i == inverteNumero(i)){  
    		// Utilizo um 'if ternário' para mostrar uma saída mais adequada ao usuário, separando por vírgula os números. 
    		// Não coloco vírgula apenas no último número.
    		printf("%d%c ", i, (i + 1 == 10000 ? '\n' : ','));
    	}    	
    }    

    return 0;
}
```

### Questão 8

Dados n e uma sequência de números inteiros, determinar quantos segmentos de números iguais consecutivos compõem essa sequência. Exemplo: a seguinte sequência 5, 2, 2, 3, 4, 4, 4, 4,1, 1, possui 5 segmentos de números iguais.

```C
#include <stdio.h>

int main(){    
    // Declaro as variáveis
    int segmentos = 0;
    long aux = 0, n = 0;

    printf("Informe um número inteiro positivo: ");
    scanf("%ld", &n);

    for(int i = 0; n != 0; i++){    			
    	// Considero que há um novo segmento
    	segmentos++;
		
    	// Não é a primeira leitura e o valor atual é igual ao anterior    	
    	if(i != 0 && aux == n%10){
    		// Desconsidero o novo segmento
			segmentos--;    			
    	}
    	    
	    // Guardo o dígito atual para ser comparado posteriormente
    	aux = n%10;			

    	// Passo para o próximo dígito
		n /= 10;	
	}

	printf("O número informado possui %d segmentos.\n", segmentos);

    return 0;
}
```

### Questão 9

Escreva um programa que leia dois valores e um inteiro correspondente a uma operação da seguinte forma: 1. adição; 2 subtração; 3. multiplicação. 4 divisão. Calcule o resultados da operação dada sobre os dois valores lidos.

```C
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
```