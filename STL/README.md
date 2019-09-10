# Standard Template Library
- Vector: Acesso O(1), tamanho modificavel, coloca e tira do final em O(1)
- Pilha: Tira e coloca do topo em O(1)
- Fila: Tira do inicio e coloca no final em O(1)
- Deque (Double ended queue): Tira e coloca no inicio e no final em O(1)
- Par: Associa dois valores
- Set: Representa um conjunto em que não há item repetido; inserir/remover/buscar é O(log(n))\
  Está sempre ordenado

# Iteradores
Disponivel para maioria dos contâiners do STL\
percorra assim:
```cpp
for(auto i = stl.begin(); i != stl.end(); i++)
{
    *i; // Pega valor para o qual o iterador está apontando
    /* Código */
}
```
Ou assim
```cpp
for(auto i : stl)
{
    i; // Pega valor para o qual o iterador está apontando
    /* Código */
}
```
Existem também os iteradores reversos (stl.rbegin(), stl.rend()): quando incrementados aponta para posição anterior

# Sort
O `sort` está disponivel para qualquer `strct` com a função `operator<` definido
