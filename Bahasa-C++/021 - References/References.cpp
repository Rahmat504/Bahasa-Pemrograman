#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // kita buat references / referensi
    string barang1 = "Seblak";
    string &barang2 = barang1;

    // output
    cout << barang1 <<endl;
    cout << barang2 <<endl; // barang2 mengikuti data barang1

    // kita buat referensi lewat alamat memory
    cout << &barang1 << endl; // 0x7ffe6c4352e0 ini adalah alamatnya
    return 0;
}
