# Analise de Complexidade
10<sup>8</sup> operações por segundo é uma boa aproximação para o número de operações que o c++ é capaz de fazer por segundo

# Fast Cin e Cout
Torna o `cin` e o `cout` um pouco mais rápido desvinculando-os do `scanf` e `printf`\
Não pode ser usado junto com o `printf` e `scanf`\
O `printf` e `scanf` ainda é mais rápido
```cpp
ios::sync_with_stdio(false);
cin.tie(NULL);
```
