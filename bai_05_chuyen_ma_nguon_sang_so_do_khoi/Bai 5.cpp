#include <iostream>

using namespace std;

bool Nto(int n) {
    if (n < 2) return false;   
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int n;
    cin >> n;
    if (Nto(n)) {
        cout << n << " la so nguyen to.\n";
    } else {
        cout << n << " khong phai la so nguyen to.\n";
    }

    return 0;
}