#include <iostream>
using namespace std;

int main(){
// String Gabungan
    string A = "Hallo ";
    string B = "Apa kabar ?";
    cout << A + B << endl;
// Number Dan String
    int C = 45; //<--- Error Karena Tidak Sama Type data
    string Ganti_C = "45"; // <-- Gunakan tanda " "
    cout << A + Ganti_C << endl;
// Panjang String
    string Kalimat = "Saya Akan Senang !!! ";
    cout << Kalimat;
    cout << "Memiliki Kalimat : " << Kalimat.length() << endl;
// Access String
    string acc = "SUBSCRIBE";
    cout << acc[0] <<endl;
// User Input String
    string nama;
    cout << "Masukan Nama : ";
    //cin >> nama;
    //cout << "Nama Anda Adalah : " << nama <<endl;
    getline(cin, nama); // Gunakan getline agar semua tampil
    cout << "Nama Anda Adalah : " << nama <<endl;

}
