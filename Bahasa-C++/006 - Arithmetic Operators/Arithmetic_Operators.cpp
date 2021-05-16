//aritmatika  + - * / %
//increment ++ --
#include <iostream>
using namespace std;

int main(){

    // BUAT 2 VARIABLE
    int X = 10, Y = 2;

    // ARITMATIKA PENJUMLAHAN
    int JUMLAH = X + Y;
    
    // ARITMATIKA KURANGI
    int KURANG = X - Y;

    // ARITMATIKA KALIKAN
    int KALI = X * Y;

    // ARITMATIKA BAGIKAN
    int BAGI = X / Y;

    // NAH SEKARANG COBA OUTPUTKAN
    cout <<endl;
    cout << "X = " << X << endl;
    cout << "Y = " << Y << endl;
    cout << "JIKA DITAMBAH : " << JUMLAH << endl;
    cout << "JIKA DIKURANG : " << KURANG << endl;
    cout << "JIKA DIKALI : " << KALI << endl;
    cout << "JIKA DIBAGI : " << BAGI << endl;


    // SEKARANG ADA MODULUS DAN INCREMENT
    int MODULUS = X%Y;

    // MODULUS = JIKA HABIS DIBAGI 
    cout << "JIKA MODULUS : " << MODULUS << endl;

    // INCREMENT
    X++;
    cout << "JIKA X++ : " << X << endl; // X + 1
    X--;
    cout << "JIKA X++ : " << X << endl; // X - 1
}