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