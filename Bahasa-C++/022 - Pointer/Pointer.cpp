#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // kita buat pointer
    // buat dulu value
    string barang = "Sabun";
    string* X = &barang;

    cout << X <<endl; // 0x7ffc86e7e700 --> alamat memory
    // kita kembalikan nilai dari alamat memory
    cout << *X <<endl; // Shampoo --> sudah dikembalikan

    // jadi menurut saya pointer itu adalah yang dapat menguasai
    // data dari barang
    return 0;
}

