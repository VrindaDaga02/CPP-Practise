#include <iostream>
using namespace std;

void fibSeries(int n) {
    int a = 0;
    int b = 1;

    cout << "Fibonacci series up to " << n << " terms: ";
    if (n >= 1) cout << a << " ";
    if (n >= 2) cout << b << " ";
    for (int i = 3; i < n; i++) {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    cout << endl;
}

int main() {
    int numTerms = 10;
    fibSeries(numTerms);

    return 0;
}
