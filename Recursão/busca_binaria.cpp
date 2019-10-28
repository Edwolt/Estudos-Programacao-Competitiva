// O(log(n))
// O vetor precisa está ordenado

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5;
int vetor[MAXN];
int n;

void recursiva(int l, int r, int chave)
{
    if (l > r)
    {
        cout << "Recursiva: NÃO" << endl;
        return;
    }
    
    int mid = (l + r) / 2;

    if (vetor[mid] == chave)
    {
        cout << "Recursiva: SIM" << endl;
        return;
    }
    if (chave > vetor[mid])
    {
        recursiva(mid + 1, r, chave);
    }
    if (chave < vetor[mid])
    {
        recursiva(l, mid - 1, chave);
    }
}

void iterativa(int l, int r, int chave)
{
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (vetor[mid] == chave)
        {
            cout << "Iterativa: SIM" << endl;
            return;
        }
        else if (vetor[mid] > chave)
        {
            r = mid - 1;
        }
        else if (vetor[mid] < chave)
        {
            l = mid + 1;
        }
    }
    cout << "Iterativa: NÃO" << endl;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }

    int chave;
    cin >> chave;

    sort(vetor, vetor + n);
    for (int i = 0; i < n; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    recursiva(0, n-1, chave);
    iterativa(0, n-1, chave);
}
