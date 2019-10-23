# Recursivo
- A função chama ela mesma
- Complexidade: O(2<sup>n</sup>), se você aproximar que f(n) tem mesmo tamanho que f(n-1)
- Chega ao caso base no mínimo F(n) vezes

# Programação Dinâmica
- Diminuimos o gasto da recursão usando memorização dos estados já alcançados
- É uma recursão, porém os valores que já encontramos é salvo em um array
- Útil para os casos em que não sabemos como sair da implementação recursiva
- Pode ser complicado usar se o array tiver que ser muito grande

- Complexidade: O(n + 2n), ou seja O(n), pois a complexidade é igual à uma dfs em um grafo (numero de vertices (que a função é executada) + numero de transições(quntas vezes uma função chama outra))

# Iterativa
- Basicamente um for
- Para fibonacci é facil fazer isso, mas isso não acontece sempre

- Complexidade: O(n)

# Matriz
- Se eu encontrar uma matriz M, quadrada de dimensões m, para o qual o vetor p com os proximo valor é igual a p = M * a, onde a é o vetor com valores atuais
- Eu posso dizer que os valores finais do vetor f na nº posição e i os valores iniciais, f é dado por f = M<sup>n</sup> * i

- Complexidade: O(m<sup>3</sup> log(n)), que é o gasto para elevar a matriz a n\
- Formula:
<img alt="" src="http://latex.codecogs.com/svg.latex?\begin{bmatrix}F(n)\\F(n-1)\end{bmatrix}=\begin{bmatrix}1&1\\1&0\end{bmatrix}\begin{bmatrix}F(n-1)\\F(n-2)\end{bmatrix}=\begin{bmatrix}F(n-1)\cdot%20F(n-2)\\F(n-1)\end{bmatrix}\newline\newline\Rightarrow\begin{bmatrix}F(n)\\F(n-1)\end{bmatrix}=\begin{bmatrix}1&1\\1&0\end{bmatrix}^{n-2}\begin{bmatrix}1\\1\end{bmatrix}=\begin{bmatrix}a&b\\c&d\end{bmatrix}\begin{bmatrix}1\\1\end{bmatrix}\newline\newline\Rightarrow%20F(n)=a+b" border="0">

<!--
|F(n)  | = |1  1| |F(n-1)| = |F(n-1) + F(n-2)|
|F(n-1)|   |1  0| |F(n-2)|   |F(n-1)         |

|F(n)  | = |1  1|^n |1| = |a  b| |1|
|F(n-1)|   |1  0|   |1|   |c  d| |1|

F(n) = a + b
-->
<!--
\begin{bmatrix}
F(n) \\
F(n-1) \end{bmatrix}
=
\begin{bmatrix}
1 & 1\\ 
1 & 0
\end{bmatrix}
\begin{bmatrix}
F(n-1) \\
F(n - 2)
\end{bmatrix}
=
\begin{bmatrix}
F(n-1)\cdot F(n-2) \\
F(n-1)
\end{bmatrix}

\newline \newline \Rightarrow 
\begin{bmatrix}
F(n) \\
F(n-1)
\end{bmatrix}
=
\begin{bmatrix}
1 & 1 \\ 
1 & 0
\end{bmatrix}^{n-2}
\begin{bmatrix}
1 \\
1
\end{bmatrix}
=
\begin{bmatrix}
a & b \\ 
c & d
\end{bmatrix}
\begin{bmatrix}
1 \\
1
\end{bmatrix}

\newline \newline \Rightarrow 
F(n) = a + b
-->

# Fórmula
- É muito difícil que essa implementação seja viável durante uma competição, pois requer resolver uma equação de recorrência
- Tendo a fórmula, é possível provar que ela funciona com indução matemática

- Complexidade: O(1)
- Formula:
<img alt="Formula Fechada Fiboncci" src="http://latex.codecogs.com/svg.latex?f(n)=\frac{1}{\sqrt5}\left[\left(\frac{1+\sqrt5}{2}\right)^n-%20\left(\frac{1-\sqrt%205}{2}%20\right)^n\right]" border="0">
<!-- f(n) = (1 / sqrt(5)){[(1 + sqrt(5))/2]^n - [(1 - sqrt(5))/2]^n} -->
<!--
f(n) = \frac{1}{\sqrt 5} \left[ \left( \frac{1 + \sqrt 5}{2} \right)^n - \left( \frac{1 - \sqrt 5}{2} \right)^n \right]
-->
