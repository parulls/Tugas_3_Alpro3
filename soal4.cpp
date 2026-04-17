#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"===PROGRAM TINGKAT KESENANGAN SUPORTER===\n";
    cout<<"Masukan Tingkat Kesenangan anda(1-10000): ";
    cin >> n;
    if(n<=10000){
    cout << "H";

    for (int i = 0; i < n; i++) {
        cout << "o";
    }

    cout << "r";

    for (int i = 0; i < n; i++) {
        cout << "e";
    }

    for (int i = 0; i < n; i++) {
        cout << "!";
    }

    cout << endl;
}
    else{
        cout<<"Anda Melampaui batas kesenangan"<<endl;
    }

    return 0;
}
