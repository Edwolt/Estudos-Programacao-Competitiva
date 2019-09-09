# Analise de Complexidade
10<sup>8</sup> operações por segundo é uma boa aproximação para o número de operações que o c++ é capaz de fazer por segundo

# Fast Cin Cout
Torna o `cin` e o `cout` um pouco mais rápido desvinculando-os do `scanf` e `printf`\
Não pode ser usado junto com o `printf` e `scanf`\
O `printf` e `scanf` ainda é mais rápido
```cpp
ios::sync_with_stdio(false);
cin.tie(NULL);
```
# Frequência
Se o importante é saber o número de vezes que um número aparece, array de frequência é uma boa
Se tiver muitos valores, pode ser necessário usar um map

# Questões com 10<sup>9</sup>+7
Esse número serve para fazer não da overflow
Use as propiedades:

- (a+b) % c = a%c + b%c
- (a-b) % c = a%c - b%c
- (ab) % c = (a%c)(b%c)
- (a/b) % c &ne; (a%c)/(b%c)
