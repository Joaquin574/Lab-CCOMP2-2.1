#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a;
    int b;
    int c;
    int alpha;
    int betta;
    float hipotenusa;
    float catetoMayor;
    float catetoMenor;
    int anguloMayor;
    int anguloMenor;
    float senoalpha, cosenoalpha, tangentealpha;
    float senobetta, cosenobetta, tangentebetta;

    cout << "Lado a: ";
    cin >> a;
    cout << "Lado b: ";
    cin >> b;
    cout << "Lado c: ";
    cin >> c;
    cout << "Angulo 1: ";
    cin >> alpha;
    cout << "Angulo 2: ";
    cin >> betta;

    if (b < c & c < a) {
        cout << "El lado a es la hipotenusa\n";
        cout << "El lado b es el cateto menor\n";
        cout << "El lado c es el cateto mayor\n";
        hipotenusa = a;
        catetoMenor = b;
        catetoMayor = c;
    }
    if (c < a & a < b) {
        cout << "El lado b es la hipotenusa\n";
        cout << "El lado a es el cateto mayor\n";
        cout << "El lado c es el cateto menor\n";
        hipotenusa = b;
        catetoMayor = a;
        catetoMenor = c;
    }
    if (a < b & b < c) {
        cout << "El lado c es la hipotenusa\n";
        cout << "El lado b es el cateto mayor\n";
        cout << "El lado a es el cateto menor\n";
        hipotenusa = c;
        catetoMayor = b;
        catetoMenor = a;
    }
    /*
    if (a == b & c < a) {
      cout << "Error, no puede haber 2 hipotenusas\n";
    }
    else if( a == b & c > a ){
      cout << "El lado c es la hipotenusa\n";
      c = hipotenusa;
    }
    if (b == c & a < b) {
      cout << "Error, no puede haber 2 hipotenusas";
    }
    else if (b == c & a>b){
      cout << "El lado a es la hipotenusa\n";
      a = hipotenusa;
    }
    if (c == a & b < c) {
      cout << "Error, no puede haber 2 hipotenusas";
    }
    else if(c == a & b > c){
      cout << "El lado b es la hipotenusa\n";
      b = hipotenusa;
    }
    if (alpha + betta > 90) {
      cout << "No es un triangulo rectangulo ";
    }
    else {
      cout << "Todo bien bro";
    }
    */

    if (alpha + betta == 90) {
        cout << "Es un triangulo rectangulo.\n";
    }
    else {
        cout << "No es un triangulo rectangulo.\n";
    }
    if (alpha < betta) {
        cout << betta << " es el betta\n";
        cout << alpha << " es el alpha\n";
        anguloMayor = betta;
        anguloMenor = alpha;
    }
    else {
        cout << betta << " es el angulo betta\n";
        cout << alpha << " es el angulo alpha\n";
        anguloMayor = alpha;
        anguloMenor = betta;
    }

    if (hipotenusa == sqrt(pow(catetoMayor, 2) + pow(catetoMenor, 2))) {
        float area = (catetoMayor * catetoMenor) / 2;
        cout << "El area es: " << area << endl;
        float perimetro = catetoMayor + catetoMenor + hipotenusa;
        cout << "El perimetro es: " << perimetro << endl;
    }
    else {
        cout << "Los datos son erroneos\n";
    }

    senoalpha = catetoMenor / hipotenusa;
    cout << "seno de alpha: " << senoalpha << endl;

    cosenoalpha = catetoMayor / hipotenusa;
    cout << "coseno de alpha: " << cosenoalpha << endl;

    tangentealpha = senoalpha / cosenoalpha;
    cout << "tangente de alpha: " << tangentealpha << endl;

    senobetta = catetoMayor / hipotenusa;
    cout << "seno de betta: " << senobetta << endl;

    cosenobetta = catetoMenor / hipotenusa;
    cout << "coseno de betta: " << cosenobetta << endl;

    tangentebetta = senobetta / cosenobetta;
    cout << "tangente de betta: " << tangentebetta << endl;


    int i, j;
    int asterisco;
    for (;;) {
        for (i = 1; i <= catetoMayor; i++) {
            for (j = 1; j <= i; j++) {
                cout << " * ";
            }
            cout << endl;
        }
        break;
    }
    return 0;
}