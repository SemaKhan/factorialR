
#include <iostream>

using namespace std;

int factorialR(int n) {
    if (n <= 0)
        return 1;
    return n * factorialR(n - 1);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << factorialR(n) << endl;
    return 0;
}