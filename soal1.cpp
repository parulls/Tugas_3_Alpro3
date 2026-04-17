#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan n: ";
    cin >> n;
    
    int bilangan = 1;
    int tambah = 5; 
    
    for(int i = 0; i < n; i++) {
        cout << bilangan;
        if(i < n - 1) cout << " ";
        
        if(tambah == 5) {
            bilangan += 5;
            tambah = 3;
        } else {
            bilangan += 3;
            tambah = 5;
        }
    }
    cout << endl;
    
    return 0;
}
