# Fast Cin e Cout
Torna o `cin` e o `cout` um pouco mais rápido desvinculando-os do `scanf` e `printf`\
Não pode ser usado junto com o `printf` e `scanf`\
O `printf` e `scanf` ainda é mais rápido
```cpp
ios::sync_with_stdio(false);
cin.tie(NULL);
```
