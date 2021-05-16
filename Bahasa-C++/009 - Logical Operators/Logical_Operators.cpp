// && , || , !
#include <iostream>
using namespace std;

int main(){

    // BUAT 2 VALUE 
    int X = 6, Y = 2;

    // OPERATOR "DAN" / "AND"
    cout << " X && Y = " << (( X && Y ) || ( X || Y )) << endl;
    // OPERATOR "ATAU" / "OR"
    cout << " X || Y = " << (( X || Y ) && ( X && Y )) << endl;
    // OPERATOR "NOT"
    cout << "!( X && Y ) = " << (!( X && Y ) && ( X && Y )) << endl;

    // 1 = TRUE dan 0 = FALSE
}