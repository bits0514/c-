#include <iostream>

using namespace std;

template <typename T>
T product(T a, T b) {
    return a * b;
}

int main() {
    T a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Product: " << product(a, b) << endl;

    return 0;
}
