### Problemas de recursividade 

## O que é uma função recursiva?

Uma função recursiva é aquela que chama a si mesma até atingir o caso base. Um problema que ilustra bem a recursividade é o cálculo de um fatorial.
Por definição temos que:

```
n! = 1, se n = 1 ou n = 0
     n *(n-1), se n > 1
```

Sendo assim, se tomarmos n = 5, então n! = 5 * (5 - 1)  * (4 - 1) * (3 - 1) * (2 - 1) * 1 = 120.
Perceba que, para chegarmos ao fatorial de n = 5, precisamos recorrer ao fatorial de n = 4, n = 3 e assim por diante até chegarmos em n = 1, que, como vimos anteriomente, tem o fatorial = 1.

Como nesse problema precisamos recorrer aos valores anteriores para obter o resultado podemos implementar uma função recursiva como solução.

```
int factorial (int n) {
  if (n == 1 || n == 0) { // caso base
    return 1;
  } else {
    return n * factorial(n -1);
  }
}
```

No exemplo acima ocorrerá um empilhamento de chamadas à função `factorial`, até o caso base de `n == 1 || n == 0` ser alcançado:

 |factorial(5) | factorial(4) | factorial(3) | factorial(2) | factorial(1) | chamadas |
 --------------------------------------------------------------------------------------
 |  5 * 24     |   4 * 6      |    3 * 2     |      2 * 1   |         1    | retorno  |


## Qual a motivação para usarmos esse conceito de programação?
Funções recursivas são úteis pelo fato de simplificarem a solução de problemas que podem ser divididos em partes menores, como cálculo de fatorial, ordenação ou busca em árvores entre outros.

## Desvantagens
Uso excessivo de memória, já que muitas chamadas recursivas podem causar erros de memória.

## Conlusão
- A função recursiva chama a si mesma;
- Toda função recursiva precisa de um caso base;
- Funções recursivas são ótimas para problemas do tipo: Dividir para conquistar.
- Devemos ter cuidado para não causar problemas de memória.

Fonte: https://issuu.com/franciscomamed/docs/aprendendo_a_programar_na_linguagem tópico 5.7