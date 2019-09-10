// Tanto fila quanto pilha
// Tirar e colocar item no inicio e no final é O(1)
// Diferentemente do vector a inserção no inicio é O(1) e não O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;

    // Retona valor
    dq.front();
    dq.back();

    // insere item
    dq.push_back(1);
    dq.push_front(1);

    // Retira item
    dq.pop_back();
    dq.pop_front();

    // dq.insert(...) // O(n) por navegar por todo vetor
}