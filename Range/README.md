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

- BITs (Árvore de Ferwk)\
Um Array com posição indexada pelo valor binário no qual o primeiro bit 1 diz de quantos números aquela posição cuida\
Exemplo: 6 (110) da bits cuida de 6 e 5 do "vetor"\
O primeiro 1 é conseguido com `i & (-1)`\
Range_Querry e Point_Update O(log(n))\
Ou Point_Querry e Range_Update O(log(n)) (vetro de diferença)


Se somar com i você vai para o de baixo (cuida dos debaixo)\
Se subtrair com i vai para cima (cuida dele e dos decima)\
Posso salvar frequências na BIT

- Busca na BITs e SegTree
Fazer Busca binária calculando query