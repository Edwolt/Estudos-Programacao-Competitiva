// Recebe uma sequancia de () {} [] e diz se ela está correta

#include <bits/stdc++.h>
using namespace std;

stack<char> parentese;

void colocar(char b) {
    if (b == '(' || b == '[' || b == '{') {
        parentese.push(b);
        return;
    }
    if (b == ')') {
        if (parentese.empty() || parentese.top() != '(') {
            cout << "Invalido" << endl;
            exit(0);
        }
        parentese.pop();
    }
    if (b == ']') {
        if (parentese.empty() || parentese.top() != '[') {
            cout << "Invalido" << endl;
            exit(0);
        }
        parentese.pop();
    }
    if (b == '}') {
        if (parentese.empty() || parentese.top() != '{') {
            cout << "Invalido" << endl;
            exit(0);
        }
        parentese.pop();
    }
}

int main() {
    string str;
    cin >> str;

    for (char c : str) {
        colocar(c);
    }

    if (parentese.empty()) {
        cout << "Valido" << endl;
        return 0;
    }
    cout << "Invalido" << endl;
}