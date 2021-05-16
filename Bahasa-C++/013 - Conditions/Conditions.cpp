#include <iostream>
using namespace std;

int main(){
    // Kita Buat 1 Variable
    int nilai = 80;
    if( nilai == 100){
        cout << "Anda Lulus" << endl;
    }
    else if(nilai > 80 && nilai < 100){
        cout << "Lumayan " << endl;
    }
    else{
        cout << "Anda Gagal " << endl;
    }
}