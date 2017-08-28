# Arrays

## Strings

### Características básicas

Supor a declaração abaixo de um vetor de caracteres:
  ```C
  char v[] = {'a', 'b', 'c'};
  ```

O vetor armazena texto, mas ficar digitando os caracteres entre apóstrofes não é necessário se usarmos o texto entre aspas, tal como usamos no comando **printf**. Este texto é uma *string*. Veja abaixo uma alternativa usando string.

  ```C
  char v[] = "abc";
  ```

* Uma string corresponde a um vetor de caracteres terminada pelo caracter **‘\0’** ou **NULL** que tem valor **0**. Para usar o **NULL** ao invés de **'\0’** pode ser necessária a definição 

 ```C
  #define NULL '\0'
  ```

  Quando usamos aspas queremos dizer *string*, e automaticamente o **'\0'** é colocado pelo compilador.

No exemplo acima, embora não tenhamos escrito explicitamente o caracter **NULL**, o compilador automaticamente  colocou este caracter como o último elemento do vetor v. 