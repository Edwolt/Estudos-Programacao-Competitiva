// O problema quer saber de quantas formas posso pegar elementos do vetor e somar de forma que de x
#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long
const int MAXN = 1e5;

ll vet[MAXN];
int n;
ll x;

ll solve(int pos, ll soma)
{
    // if(pos == n && soma == x) return 1;
    // if(pos == n && soma != x) return 0;
    if (pos == n) return soma == x;

    return solve(pos + 1, soma + vet[pos]) + solve(pos + 1, soma);
}