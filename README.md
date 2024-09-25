# Estrutura de dados - lista ligada

Uma lista ligada é um **estrutura de dados lines** onde cada elemento é um nó que armazena dois componentes:
    1. **Dado**: o valor do elemento.
    2. **Ponteiro**: a referência (endereço de memória) para o próximo nó.
* **Vatangens**:
    * A lista não precisa de um tamanho fixo como arrays, o que torna flexível para crescer ou diminuir dinamicamente.
    * Insersões e removações são mais efientes, pois não é necessário deslocar elementos (comom nos arrays).
* Visulização:
    * [dado1] -> [dado2] -> [dado3] -> NULL

## Estrutura de dados em C: Nó e lista ligada

## Operações básica da lista
### Inserir um nó no início da lista
* Para inserir no ínicio, precisamos criar um novo nó e fazer com que ele aponte para o nó atual da cabeça da lista. Então atulizamos a cabeça da lista para esse novo nó.
* Essa operação é realizada em tempo constante (_O(1)_), pois não é necessário percorrer a lista.

### Inserir nó no final da lista
* Para **inserir no final**, precisamos percorrer a lista até encontrar o último nó (onde `next` é  `NULL`). O campo next desse nó será atulizado para apontar para o novo nó.
* A inserção no final exige percorrer toda a lista, o que tem complexidade (_O(n)_), onde (n) é o número de nós.

### Contar o número de elementos da lista

### Buscar um elemento na lista
* Para **buscar um elemento**, percorremos a lista e comparamos

### Recializar a lista
