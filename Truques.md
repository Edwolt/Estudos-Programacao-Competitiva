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
# Precisão Float cout
```cpp
cout << fixed << setprecision(10) << res << endl;
```

# Frequência
Se o importante é saber o número de vezes que um número aparece, array de frequência é uma boa\
Se tiver muitos valores, pode ser necessário usar um map

# Questões com 10<sup>9</sup>+7
Esse número serve para fazer não da overflow\
Use as propiedades:

- (a+b) % c = a%c + b%c
- (a-b) % c = a%c - b%c
- (ab) % c = (a%c)(b%c)
- (a/b) % c &ne; (a%c)/(b%c)

# Overflow
Preste atenção que não é necessário que o resultado final exceda o limite para dar overflow\
Se em qualquer parte da com acontecer um overflow O resultado já estará atrapalhado\
(um `int` somado a outro `int` retorna um `int` que se tiver seu valor estourado já atrapalha a conta)

# Infinito
```cpp
#define INF 0x3f3f3f3f
```
`INF` cabe em um `int` e `INF + INF` também\
`INF * INF` cabe em um `long`

# Variaveis Globais
Variaveis globais são incializadas com 0
