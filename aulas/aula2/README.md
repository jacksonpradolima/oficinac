# DADOS EM C

* Variáveis e Constantes: Objetos básicos
* Bloco de Declarações: Contém as variáveis, a definição de seus tipos e às vezes seus valores iniciais.

## Identificadores

* Lembre-se: Uma variável corresponde a uma posição de memória, ela possui um nome.
* Identificadores são os "nomes" dados às variáveis, constantes e funções.
* Existem algumas regras para escolher os identificadores:
  * Não usar palavras reservadas. 
    Ex.: if, else, int, float, break, etc.
  * Em C, as letras maiúsculas são diferentes das minúsculas. 
    Ex.: x != X (cuidado com confusões)
  * Devem iniciar com **letras**, em geral são permitidos até 8 caracteres, porém esse número pode variar em função do compilador. Números também são permitidos assim como o caracter '_'. 
  * IMPORTANTE: ESCOLHER NOMES QUE ESCLAREÇAM A FINALIDADE DAS VARIÁVEIS. 
    Ex.: nota1, media, total_matricula, etc.

## Tipos de dados

* Determinam o conteúdo de uma variável. Os tipos básicos (simples) são: 
  * **Caracter (char)**:
  Ocupa 1 byte. Cada caracter tem uma posição na tabela de caracteres. (-128 a 127) 
  
    Códigos ASCII- caracteres constantes 
    - '0' = 48
    - '9' = 57
    - 'A' = 65
    - 'a' = 97
    - '0' < '9'
    - 'A' < 'Z'
    - 'a' < 'z'
    - 'a' + 1 resulta 'b' 
    - ' ' = 32
    - EOF (end of file)=-1=NULL

  * **Inteiros**: 
  Podem ocupar diferentes números de bytes e a faixa de valores que os mesmos assumem, varia em função desse número. Alguns tipos inteiros são: 
    - **short**: 2 bytes, -32768 a 32767 
    - **unsigned short**: 2 bytes, 0 a 65.535 (sem sinal)
    - **int**: 2 ou 4 bytes, -32768 a 32767 (32 bits)  -2.147.483.648...2.147.483.647 (64 bits) 
    - **unsigned int**: 2 ou 4 bytes, 0...65.535 (32 bits) 0...4.294.967.295 (64 bits) 
    - **long**: 4 bytes, -2.147.483.648 a +2.147.483.647
    - **unsigned long**: 4 bytes, 0...4.294.967.295 
    - **+MAXINT -MAXINT** (constantes que representam o máximo inteiro + e -).

  * **Real**: 
  Assim como os inteiros, também diferem no número de bytes:
    - **float**: 4 bytes (precisão simples/ ponto flutuante), 1.2E-38...3.4E+38 (7 dígitos)
    - **double**: 8 bytes (precisão dupla), 2.3E-308...1.7E+308 (15 dígitos)
    - **long double**: 10 bytes. 3.4E-4932...1.1E+4932 (19 dígitos) 

    (é obrigatório um número após o E, colocar 0 quando necessário).

 * Cada compilador tem sua maneira para alocar memória para os tipos.
 * Números podem ser inseridos na base 10 (decimal), 8 (octal) ou 16 (hexadecimal)
 
    Ex.: 0724 = 469 na base 10.
  
    base 8 : zero à frente (dígitos de 0 a 7)
  
   0x41, 0X1 = 161 na base 10 (o x pode ser maiúsculo ou minúsculo)
  
   base 16 : zero X à frente (dígitos de 0 a 9 e letras de **a** a **f**)

# Variáveis

* Podem conter diversos valores ao longo de sua existência.
* Devem ser declaradas antes de seu uso.
 
  Sintaxe: 
    ```
    <tipo> <nome>;
    <tipo> <nome1>, <nome2>, ...;
    ```
  
  Exemplo:
  ```C
  int inicio, fim, incr; 
  char c, linha [1000];
  ```

  o código acima é equivalente a:

  ```C
  int inicio;
  int fim;
  int incr;
  char c;
  char linha [1000];
  ```

* Uma variável pode ser declarada e inicializada no mesmo comando.
  Exemplo:
  ```C
  int i = 0;
  float eps = 1.0e-5 /* notação científica para números reais*/
  char contrabarra = '\\';
  int a = b = c = 0; // todas as variáveis iniciam com 0
  int a = 0, b = 1, c = 2;
  ```

# Constantes (MACROS) 

* Ao contrário das variáveis, seus valores não podem ser alterados ao longo do programa.
  Sintaxe: 
  ```C
  #define <nome> <valor>
  ```

* Exemplo:
  ```C
  #define MAXLINHA 1000
  #define SIMBOLO “AAX” /* tipo char[4] */
  #define VALOR 1.0e-5 /* double */
  ```

* O "default" de constante real é *double* (precisão dupla). Se quiser *float* (precisão simples), escrever f ou F no final. Ex.: 10.5f ou 10.5F. O "default" de constante inteira é *int*. Se quiser *long int*, escrever L ou l no final. Ex.: 10L ou 10l 

* Depois de uma constante ser definida, ela pode ser imediatamente usada.
  Ex.:: 
  ```C
  #define MAX 300
  char linha [ MAX + 1]; /* vetor de char tamanho 301 */
  ```

* Pode-se declarar especificando seu tipo.
  Ex.:
  ```C
  const double e = 2.718281;
  const char msg[]= "AVISO";
  ```

Serão vistos mais detalhes de MACROS (macros com argumentos)
