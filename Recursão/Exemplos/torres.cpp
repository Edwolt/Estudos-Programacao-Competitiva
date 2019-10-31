// Você tem (n1, n2, n3)
// Você pode tirar das n1 de uma das outras torres, n2 de uma das outras torres, ...
// A pergunta é de quantas formas eu zero uma das torres

#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

ll solve(ll n1, ll n2, ll n3) {
    if (n1 == 0 || n2 == 0 || n3 == 0)
        return 1;
    ll res = 0;

    if (n1 <= n2) res += solve(n1     , n2 - n1, n3     );
    if (n1 <= n3) res += solve(n1     , n2     , n3 - n1);
    if (n2 <= n1) res += solve(n1 - n2, n2     , n3     );
    if (n2 <= n3) res += solve(n1     , n2 - n3, n3     );
    if (n3 <= n1) res += solve(n1 - n3, n2     , n3     );
    if (n3 <= n2) res += solve(n1     , n2     , n3 - n3);

    return res;
}

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    cout << solve(n1, n2, n3) << endl;
}