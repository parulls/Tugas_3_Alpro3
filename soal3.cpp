#include <iostream>
using namespace std;

bool isKabisat(int tahun) {
    if((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        return true; 
    }
    return false; 
}

int main() {
    int A, B;
    
    cout << "Masukkan tahun (A): ";
    cin >> A;
    cout << "Masukkan interval (B): ";
    cin >> B;
    
    cout << endl;
    
    if(B >= 0) {

        for(int i = 0; i <= B; i++) { 
            int tahun = A + i;
            if(isKabisat(tahun)) {
                cout << tahun << " kabisat" << endl;
            } else {
                cout << tahun << " bukan kabisat" << endl;
            }
        }
    } else {

        for(int i = 0; i >= B; i--) {
            int tahun = A + i;
            if(isKabisat(tahun)) {
                cout << tahun << " kabisat" << endl;
            } else {
                cout << tahun << " bukan kabisat" << endl;
            }
        }
    }
return 0;
}
