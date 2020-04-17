#include <iostream>
#include<cmath>

using namespace std;

int main() {
    int x = 100;
    int y = 50;
    float z;
    z = y / x;
    float xf;
    float yf;
    xf = x;
    yf = y;
    z = yf / xf;

    cout << "la suma de " << x << " y " << y << " es " << x + y << endl;

    cout << "la resta de " << x << " y " << y << " es " << x - y << endl;

    cout << "la multiplicacion de " << x << " y " << y << " es " << x * y << endl;

    cout << "la division de " << x << " y " << y << " es " << x / y << endl;

    cout << "Y la division de " << y << " y " << x << " es " << z << endl;

    cout << "el residuo de " << x << " y " << y << " es " << x % y << endl;

    if (x > y) {
        cout << x << " es mayor que " << y << endl;
    }
    else if (x < y) {
        cout << y << " es mayor que " << x << endl;
    }
    else if (x == y) {
        cout << x << " y " << y << " son iguales" << endl;
    }
    else if (x % y == 0) {
        cout << x << " es divisor de " << y << endl;
    }



    string funcion;
    int a;
    int b;
    float c;
    c = a / b;
    float ad;
    float bd;
    ad = a;
    bd = b;
    c = ad / bd;
    cout << "primer numero: \t";
    cin >> a;
    cout << "segundo numero:\t";
    cin >> b;
    cout << "deseas sumar(+) o restar(-) o multiplicar(*) o dividir(/) o residuo (%) o saber el residuo o la raiz cuadrada (sqrt)?   ";
    cin >> funcion;
    if (funcion == "+") {
        cout << "la suma es: " << a + b << endl;
    }
    else if (funcion == "-") {
        cout << "la resta es: " << a - b << endl;
    }
    else if (funcion == "*") {
        cout << "La multiplicacion es: " << a * b << endl;
    }
    else if (funcion == "/") {
        cout << "la division es: " << a / b << endl;
    }
    else if (funcion == "%") {
        cout << "el residuo es: " << a % b << endl;
    }
    else if (funcion == "sqrt") {
        cout << "la raiz de " << a << " es " << sqrt(a) << endl;
        cout << "la raiz de " << b << " es " << sqrt(b) << endl;
    }
    else {
        cout << "Escriba bien lo que quiere ejecutar" << endl;
    }
    return 0;
}