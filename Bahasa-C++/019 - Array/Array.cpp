#include <iostream>
using namespace std;

int main(){

    // Array Menggunakan tanda []
    string barang[10] = { "Sikat", "Odol", "Sabun"};
    // Array Dihitung Mulai Dari NOL / 0

    // Cara OutPut
    cout << barang[1] <<endl;

    // Coba Kita Tambah Lagi
    barang[5] = "Gayung";
    barang[4] = "Shampo"; // Segmentation fault => tidak dapat
    // karena sudah melebihi limit
    // jadi kita hapus & dan tambah
    cout << barang[4] <<endl;
    cout << barang[5] <<endl;


}