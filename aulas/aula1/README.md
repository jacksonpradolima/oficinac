# Introdução

## Origens da Linguagem C

* Algumas idéias vieram da linguagem BCPL (linguagem B desenvolvida por Martin Richards), que era uma linguagem sem tipo.
* A linguagem C foi inicialmente projetada para o sistema operacional UNIX, por Dennis Ritchie - 1972 no AT & Bell Laboratories - NEW Jersey - EUA. Hoje é usada em outros sistemas como DOS/Windows e Macintosh.
* Em 1989 o padrão C foi oficializado pelo ANSI (American National Standards Institute) - padrão ANSI X3.159-1989, conhecido hoje como [ANSI C](https://en.wikipedia.org/wiki/ANSI_C), C89 ou C90. Outros: C99 e C11.

## Principais características
* **Generalidade**: 
  * Possui inúmeras aplicações. Ex.: Sistemas Comerciais, problemas que exigem visualização de dados (gráficos, imagens), problemas que exigem muitos cálculos, construção de sistemas operacionais e compiladores.

* **Falta de Restrições**: 
  * Não faz verificação de tipos e parâmetros, etc. Muitas vezes deixa passar erros sem avisar. Isso não é bom para iniciantes.

* **Suporta Diferentes Níveis de Programação**:
  * Possui todas as características de uma linguagem de alto nível: fluxos de controle, estruturas de dados, procedimentos, etc.
  * Por outro lado permite o acesso às características do hardware: manipular bits, acessar palavras de memória, endereços, etc...

* **Extensibilidade**: 
  * Através das bibliotecas é possível "aumentar a linguagem", implementando novas características. Ex.: Em C não existem comandos como *Read* e *Writeln* (do Pascal), mas a linguagem permite que bibliotecas para esse fim sejam construídas.
  * Exemplos de bibliotecas "padrão":
  
    *<stdio.h>* Rotinas de Entrada/Saída Ex.: *scanf()*, *printf()*
  
    *<string.h>* Rotinas de manipulação de strings. Ex.: *strlen()*
  
    *<math.h>* Rotinas matemáticas. Ex.: *fabs()*

* **Portabilidade**: 
  * C é uma linguagem facilmente transportável de um sistema para outro. Linguagem independente do hardware (o compilador faz a adaptação).
  * Existem alguns padrões pré-definidos da linguagem C:
    
    **K&R** Kernighan e Ritchie: Usado inicialmente no UNIX. Com o aparecimento de outros compiladores nos PCs, surgiu a necessidade de um novo padrão para suprir as falhas.
    
    **ANSI** (*American National Standards Institute*): Define regras para facilitar o uso da linguagem. Ex.: Mudanças na sintaxe para declarar e definir funções serve para detectar se os tipos dos argumentos são compatíveis. 
    
    Muitos compiladores permitem que seja definido o padrão.
    
## Estrutura básica de um programa em C

* Consiste em uma ou mais funções.

* Menor programa possível:

```C
main()
{
}
```

* A função *main* deve existir em algum lugar do programa. Marca o ponto de início do mesmo. 

* Exemplos de programas em C:
  * Ex1.:
  ```C
  /*       primeiro.c        (nome do arquivo onde foi gravado)    */
  #include <stdio.h>     // inclusao de  bibliotecas e definições
  main()
  { 
    printf("Vou iniciar!!! \n"); // função para impressão
  }
  ```
  
  * Ex2.:  
  ```C
  /*       segundo.c    */
  #include <stdio.h>
  void inicio()
  {
    printf("Vou iniciar!!! \n");
  }
  int main()
  {   
    inicio();
  }
  ```

  * Ex3.: 
  ```C 
  /*MEDIA.C         (nome do arquivo onde foi gravado)    */
  #include <stdio.h>
  #define MAX 12
  float nota1, nota2, med;
  char sit;
  main( )
  {
    int k;
    printf("MEDIAS FINAIS \n");
    for (k=1; k<MAX;k++)
    {
      printf("Digite as notas \n");
      scanf("%f  %f", &nota1, &nota2);
      med= (nota1 + nota2)/2;

      if(med>=7.0)
        sit= 'A';
      else if (med >=4.0)
        sit= 'F';
      else sit= 'R';
        printf ("media = %f  e situação = %c \n", med, sit);
      
      if (sit == 'R')
        printf("SINTO MUITO!! \n");
    } 
  }
  ```
  
* Para compilar e executar o arquivo: 
  ```shell
  > gcc primeiro.c 
  > a.out     
  ```      
  
* Especificando o executável (definindo um nome específico ao executável):
 ```shell
  > gcc -o primeiro.exe primeiro.c
  > primeiro.exe
  ```                     
