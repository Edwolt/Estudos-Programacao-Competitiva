# Recursivo
A função chama ela mesma\
Complexidade: O(2<sup>n</sup>), se você aproximar que f(n) tem mesmo tamanho que f(n-1)

# Programação Dinâmica
É uma recursão, porém os valores que já encontramos é salvo em um array\
Útil para os casos em que não sabemos como sair da implementação recursiva\
Pode ser complicado usar se o array tiver que ser muito grande\
Complexidade: O(?), pois a complexidade é igual à uma dfs em um grafo

# Iteratica
Basicamente um for\
Para fibonacci é facil fazer isso, mas isso não acontece sempre\
Complexidade: O(n)

# Matriz
Se eu encontrar uma matriz M, quadrada de dimensões m, para o qual o vetor p com os proximo valor é igual a p = M * a, onde a é o vetor com valores atuais\
Eu posso dizer que os valores finais do vetor f na nº posição e i os valores iniciais, f é dado por f = M<sup>n</sup> * i\
Complexidade: O(m<sup>3</sup> log(n)), que é o gasto para elevar a matriz a n

# Fórmula
É muito difícil que essa implementação seja viável, pois requer que tenha a formula de antemão\
Tendo a fórmula, é possível provar que ela funciona com indução matemática\
Complexidade: O(1)\
Formula: <img alt="Formula Fechada Fiboncci" src="http://latex.codecogs.com/svg.latex?f(n)=\frac{1}{\sqrt5}\left[\left(\frac{1+\sqrt5}{2}\right)^n-%20\left(\frac{1-\sqrt%205}{2}%20\right)^n\right]" border="0">
<!-- 
f(n) = (1 / sqrt(5)){[(1 + sqrt(5))/2]^n - [(1 - sqrt(5))/2]^n}

f(n) = \frac{1}{\sqrt 5} \left[ \left( \frac{1 + \sqrt 5}{2} \right)^n - \left( \frac{1 - \sqrt 5}{2} \right)^n \right]
 -->
