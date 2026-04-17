#include <iostream>
using namespace std;

int main() {
    int n;
    int jumlah = 0;

    cout << "Masukkan nilai n: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        jumlah += i * i;
    }

    cout << "Hasil: " << jumlah << endl;

    return 0;
}
