# Range (intervalo)
Formas de somar e atualizar "vetores" em range

- Vetor de soma Acumulada\
Complexidade Busca: O(1)\
Complexidade Atualização: O(n)

- Segmentation Tree\
Cada folha cuida da metade do intervalo do pai\
Ocupa no máximo 4 vezes o tamanho que um vetor ocuparia\
Complexidade Busca: O(log(n))\
Complexidade Atualização: O(log(n))

- Segmentation Tree com Lazy