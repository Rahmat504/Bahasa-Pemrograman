#include <iostream>
using namespace std;

int main(){

    // Kita Buat Array Perulangan

    // Buat Perulangang dengan FOR LOOP
    // Buat Dulu Arraynya
    string barang[8] = { "Shampoo", "Sabun", "Sikat Gigi", "ODOL","Gayung"};
    barang[6] = "Baskom";
    // For Loop
    for( int X = 0; X < 7; X++){
        cout << barang[X] <<endl;
    }
}