#include <iostream>
using namespace std;

// Function
void getHello(){
    cout << "Hello World !!!" <<endl;
}

// Function Default
void funcDefault( string nama = "Rahmat"){
    cout << nama <<endl;
}

// Function Multiple
void funcMultiple( int X, int Y){
    int Z = X * Y;
    cout << Z <<endl;
}

// Function Return Values
int funcReturn( int A, int B){
    return A + B;
}

// Function Pass By References
int getTukar( int &D, int &E){
    int F = D;
    D = E;
    E = F;

    return F;
}
int main(){

// Cara Panggil
getHello();

funcDefault("RahSun");
funcDefault(); // Jika Tidak Diisi Maka Akan Default

funcMultiple( 3, 5); // Isinya Harus 15

cout << funcReturn(4,5) <<endl; // Isinya Harus 9

int angka1 = 12;
int angka2 = 33;
cout << "Sebelum Ditukar : " << angka1 << " | " << angka2 << endl;
getTukar(angka1, angka2);
cout << "Sesudah Ditukar : " << angka1 << " | " << angka2 << endl;

}