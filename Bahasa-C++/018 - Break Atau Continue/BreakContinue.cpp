#include <iostream>
using namespace std;

int main(){

    // Sebelumnya Saya Akan Buat Dulu Perulangan
    // Lalu Bikin Value
    int X = 0;
    for (X; X < 8; X++)
    {
        if( X == 6){continue;} // Continue => Melewati
        cout << X <<endl;
    }
    
    cout <<endl;
}