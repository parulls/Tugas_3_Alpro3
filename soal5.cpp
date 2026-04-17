#include <iostream>
using namespace std;

int n;
bool prima = true;

int main(){
    cout<<"===PROGRAM BILANGAN PRIMA===\n";
    cout<<"Masukan angka: ";
    cin>>n;
if(n<= 1){
   prima = false;
}else{
    for (int i = 2; i<= n / 2; i++){
        if(n % i == 0){
            prima = false;
            break;
        }
    }
}
 
if (prima){
    cout<<n<< " adalah bilangan prima."<<endl;
}else{
    cout<<n<<" bukan bilangan prima."<<endl;
}
return 0;
}
