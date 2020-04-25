#include <iostream>

using namespace std;

char a1, b1, c1, d1, e1, f1, g1, h1, i1, x, o;
//bool aa = false, bb = false, cc= false, dd= false, ee = false, ff = false, gg = false, hh = false, ii = false;

int main() {

    cout << "       1 | 2 | 3 " << endl;
    cout << "      -----------" << endl;
    cout << "       4 | 5 | 6 " << endl;
    cout << "      -----------" << endl;
    cout << "       7 | 8 | 9 " << endl;

    cout << endl;
    cout << "        " << a1 << "  | " << b1 << "  | " << c1 << "  " << endl;
    cout << "       -----------" << endl;
    cout << "        " << d1 << "  | " << e1 << "  | " << f1 << "  " << endl;
    cout << "       -----------" << endl;
    cout << "        " << g1 << "  | " << h1 << "  | " << i1 << "  " << endl;

    cout << "(Jugador 1) Pon un valor del 1 al 9: ";
    cin >> x;



    if (x == 1) {
        a1 = 'X';
        cout << "        " << a1 << "  | " << b1 << "  | " << c1 << "  " << endl;
        cout << "       -----------" << endl;
        cout << "        " << d1 << "  | " << e1 << "  | " << f1 << "  " << endl;
        cout << "       -----------" << endl;
        cout << "        " << g1 << "  | " << h1 << "  | " << i1 << "  " << endl;
    }


    return 0;
}