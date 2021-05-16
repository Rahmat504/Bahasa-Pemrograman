// SWITCH ADALAH EKPRESI YANG DAPAT DIEVALUASI SEKALI
// CASE --> JIKA ADA KECOCOKAN MAKA AKAN DISANDINGKAN
// DEFAULT --> JIKA TIDAK ADA KECOCOKAN MAKAN AKAN FALSE
#include <iostream>
using namespace std;

int main(){

    int Hari;
    // Kita Buat Input Usernya
    cout << "Masukan Angka : ";
    cin >>Hari;

    // kita buat switch
    switch(Hari){

        case 1:
        cout << "Senin" << endl;
        break;

        case 2:
        cout << "Selasa" << endl;
        break;

        case 3:
        cout << "Rabu" << endl;
        break;

        case 4:
        cout << "Kamis" << endl;
        break;

        case 5:
        cout << "Jum'at" << endl;
        break;

        case 6:
        cout << "Sabtu" << endl;
        break;

        case 7:
        cout << "Minggu" << endl;
        break;

        // kita gunakan default
        default:
        cout << "Ups Hari Tidak Tersedia" << endl;
    }
}