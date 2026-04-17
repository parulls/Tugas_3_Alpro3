#include <iostream>
using namespace std;

int main() {
    char kalimat[100];
    char huruf;
    int i, j = 0;
    int hitung = 0;
    
    cout << "Masukkan kalimat: ";
    cin.getline(kalimat, 100);  
    

    cout << "Masukkan huruf: ";
    cin >> huruf;
    
    char hasil[100];
    
    for(i = 0; kalimat[i] != '\0'; i++) {
        if(kalimat[i] == huruf) {
            hitung = hitung + 1;
        } else {
            hasil[j] = kalimat[i];
            j = j + 1;
        }
    }
    hasil[j] = '\0';
    
    cout << endl << hasil << endl;
    cout << "Karakter terhapus = " << hitung << endl;
    
    return 0;
}
