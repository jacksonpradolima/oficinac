# OPERADORES
* Podem ser: aritméticos, relacionais, lógicos, incremento e decremento, atribuição.
* Operadores aritméticos têm precedência sobre os relacionais que, por sua vez, têm precedência sobre os lógicos. Dentro de cada categoria de operadores, também pode ocorrer precedência.

## Aritméticos
  - \+ soma
  - \- subtração
  - \* multiplicação
  - / divisão
  - % módulo (resto da divisão de inteiros ).

* % só pode ser aplicado a inteiros.
  Ex.: 5 % 2 resulta 1
  Exemplo.:
  ```C
  int main()
  { 
    int x=5, y=2; float z=5.2;
    /* x%y resulta em 1 */
    /* z%x dá erro *?
  }
  ```
* A divisão inteira (div do Pascal) funciona da seguinte forma:
  
  * Se a variável que recebe o resultado da divisão for declarada como int, então recebe a parte inteira.
  Exemplo.:
  ```C
  int main()
  { 
    int z; float x=8, y=2;
    z = x/y /* z recebe 2 */
  }
  ```
  
  * Se os argumentos da divisão forem inteiros, o resultado será inteiro (truncado), mesmo que atribuido ao um float.
  Ex.: 
  ```C
  int main()
  { 
    float z; int x=8, y = 3;
    z = x/y /* z recebe 2.0 */
  }
  ```

  * Para se ter um resultado sem ser truncado, é necessário que um dos operandos (argumentos) seja real.
  Ex.: 
  ```C
  int main()
  {
    float w, z = 3.0;
    int y = 2;
    w = z/y /* w recebe 1.5 */
  }

## Relacionais

 |||
 --- | ---
 | == igual |  (< precedência)
 | != diferente |
 | > , >= , < , <= | (> precedência)

Ex.: i < (lim - 1) → i < lim-1 (são equivalentes) subtração é executada antes da comparação.
> **Na dúvida usar parênteses !!!**

## Lógicos
 |  |  |
 --- | ---
| && and |  (< precedência)
| \|\| or |
| ! not | (> precedência, executado primeiro)

* Em C, zero corresponde a FALSO e qualquer valor diferente de zero é verdadeiro, inclusive números negativos qual é o valor?
  ```C
  if (x==0)
  if (x=0) /* comando de atribuição, valor igual ao que está sendo atribuído a x, portanto 0, falso */
  if (x=1)
  if (printf ("%d \n", x) /* função que retorna o número de valores impressos, no caso 1, uma váriavel x sendo impresa, */
  if (EOF) /* EOF vale -1 <ctrl d>, valor verdadeiro */
  ```

* Em uma expressão, as operações são feitas de acordo com a precedência dos operadores. 
  Se eles tiverem a mesma precedência, execução é da esquerda para a direita.
  
  Ex !n&nbsp;&nbsp; -&nbsp;&nbsp; 4 &nbsp;&nbsp;&nbsp;Ex: x / y&nbsp;&nbsp; * z
 
  &nbsp;&nbsp;<1o.> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<1o.>

  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;< 2o. >&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; < 2.o >

## Incremento e decremento

  \+\+ soma 1
  
  \-\- subtrai 1

Exemplo:

  i \+\+ corresponde a i = i \+ 1
  
  i \-\- corresponde a i = i \- 1

* Estes operadores podem ser usados de duas formas:
  * prefixada ( \+\+n): incrementa antes de ser usado
  * posfixada ( n\+\+): incrementa depois de ser usado

  Ex.1: 
  ```C
  n = 3; 
  x = n++; 
  /* x recebe 3 */ 

  n = 3;
  x = ++n;
  /* x recebe 4 */
  ```
  Ex.2: 
  ```C
  if (c == '\n '')
    ++nl; /* aqui não faz diferença, com o nl ++ */
  ```
  Ex.3: 
  ```C
  if (c == '\n') 
  { 
    s[i] = c; 
    + + i;
  }

  if (c=='\n')
    s[ i + + ] = c;
  ```

  Ex.4: 
  ```C
  s[3]=c 

  i=2;
  s[i++] = c;
  /* s[2] = c */

  i=2;
  s[++i] = c;
  /* s[3] = c */
  ```
## Atribuição
* = atribui valor a uma variável
  Ex.: i = i \+ 2 pode ser escrito também como i \+= 2

* \+= também é um operador de atribuição, assim como:
  \*= , /= , \-= , %=

Sintaxe:
  ```exp1 op = exp2``` é equivalente a ```exp1 = exp1 op exp2```

  Exemplos:
  - ```i -= 2``` equivale a ```i = i - 2```
  - ```x *= 2``` equivale a ```x = x * 2```
  - ```x *= y + 3``` equivale a ```x = x * (y + 3)```
  - ```p % = 5``` equivale a ```p = p % 5```

  Obs.: As expressões são mais compactas e geralmente produzem código de máquina mais eficiente. Mas são MENOS legíveis.
  
  
  * Caso especial: *Operador Condicional Ternário*
  
  Sintaxe:
  ```<condição> ? <exp1> : <exp2>```

  ```
  if (condição)
    exp1;
  else
    exp2;
  ```

  Exemplo:
    O trecho de programa:
      ```
      if (a > b)
        z = a; /* recebe a */
      else
        z = b; /* recebe b */

  pode ser rescrito da seguinte forma:
  ```z = (a > b) ? a : b;```

  Se o resultado de (a>b) for verdadeiro, z recebe o valor que está antes dos ":"" que é a, senão z recebe o valor que está depois dos ":"" que é b.

---
# Tabela de precedência

| Símbolo | Ordem |
 --- | ---
|() [] → . | esquerda-para-direita
| \- \+\+ \-\- ! & \* ~ (type) sizeof | direita-para-esquerda
| \* / % | esquerda-para-direita
| \+ \- | esquerda-para-direita
| << >>| esquerda-para-direita
| < <= >= >|esquerda-para-direita
| == != | esquerda-para-direita
| & (and binario)| esquerda-para-direita
| ^ (XOR binário) | esquerda-para-direita
| (OR binário) | squerda-para-direita
| &&| esquerda-para-direita
| \|\| | esquerda-para-direita
| ? : | direita-para-esquerda
| = op= | direita-para-esquerda
|, |esquerda-para-direita 

---

##  Conversão de tipos

Em expressões envolvendo operadores binários com operadores de tipos diferentes, os valores são convertidos para o mesmo tipo antes da operação ser executada. Tipos mais simples são convertidos para os mais complexos.

> *char < int < long < float < double*

**Cuidado! Ver a precedência de operadores.**

Exemplos:
  ```C
    int a = 1, b = 2, c;
    float x, z = 2.0;
    c = a/b; // c = 0;
    x = a/z // x = 0.5;
    x = a/b; /* x = 0.0, primeiro realiza a operação sem conversão porque os operadores têm o mesmo tipo, depois converte para float */
  ```
Para se ter divisão real é necessário um operador real. Um artifício é multiplicar por 1.0
  ```C
   x= a*1.0/b /* x = 0.5 * e / têm mesma prioridade, executa-se da esquerda para direita */
  ```
Outra solução é usar o operador de conversão de tipos (cast) em C.

O formato do cast é ```(type) <expressão>;```

o valor correspondente a expressão será convertido para o tipo type. 

O parênteses é obrigatório. ```(float)x``` != ```float x```

A primeira convete valor de x para float, a segunda declara x como float, uma vez declarado o tipo de uma variável este não vai mais poder ser alterado.

Exemplo:
  ```C
  x = (float) a/b /* x = 0.5 ver tabela de precedência que (type) tem prioridade sobre /, então converte a para float e divide por b, como um operador é real, o resultado vai ser real */
  x = (float) (a/b) /* x =0.0, primeiro realiza o que vem dentro do (), divisão inteira, porque ambos operadores são inteiros, depois converte */
  ```
  
