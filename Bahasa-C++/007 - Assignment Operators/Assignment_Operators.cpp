// = , += , -= , *= , /= , %=
// &= , |= , ^= , >>a , <<a
#include <iostream>
using namespace std;

int main(){

    // BUAT 2 VARIABLE
    int x = 5, y = 3;

    // = ATAU SAMA DENGAN
    x = y; // BEARTI x SAMA DENGAN y
    // += ATAU x = x + y
    x += y;
    // -= ATAU x = x - y
    x -= y;
    // *= ATAU x = x * y
    x *= y;
    // /= ATAU x = x / y
    x /= y;
    // %= ATAU x = x%y
    x %= y;

    // ADA JUGA UNTUK BILANGAN BINNER
    // &= ATAU DISEBUT "DAN" / "AND"
    x &= y; // KENAPA 1 karena  5 = 0101
            //                  3 = 0011
            //               JADI = 0001 = 1
    // |= ATAU DISEBUT "ATAU" / "OR"
    x |= y; // KENAPA 1 karena  5 = 0101
            //                  3 = 0011
            //               JADI = 0111 = 7
    // ^= ATAU DISEBUT "NOT"
    x ^= y; // KENAPA 1 karena  5 = 0101
            //                  3 = 0011
            //               JADI = 0110 = 6
    // >>x ATAU BINNER DIGESER KEKANAN SAMPAI
    x >>= y; // KENAPA 1 karena  5 = 0101 >> 3
            //               JADI = 0000 - 000 = 0
    // <<x ATAU BINNER DIGESER KEKIRI SAMPAI
    x <<= y;// KENAPA 1 karena  5 = 0101 << 3
            //               JADI = 0101+000 = 0101000 = 40

    // OUTPUTNYA
    cout <<endl;
    cout << x << endl;
}

