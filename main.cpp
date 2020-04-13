#include <iostream>
#include <string.h>
#include <math.h>
#include <cstring>


int main()
{
    /*int i1, i2;
    std::string i3, i4, i5;
    std::cout << "Cuál es tu edad?\n";
    std::cin >> i1;
    std::cout << "Cuál es tu número\n";
    std::cin >> i2;
    std::cout << "Cual es tu nombre?\n";
    std::cin >> i3;
    std::cout << "Tu direccion es...\n";
    std::cin >> i4;
    std::cout << "Cual es tu hobby?\n";
    std::cin >> i5;
    std::cout << std::endl;
    return 0;


    float numero1, numero2;
    std::cout << "Primer numero: \n";
    std::cin >> numero1;
    std::cout << "Segungdo numero: \n";
    std::cin >> numero2;
    std::cout << "La suma es " << numero1 + numero2;
    std::cout << std::endl;
    std::cout << "La resta es: " << numero1 - numero2;
    std::cout << std::endl;
    std::cout << "La multiplicacion es: " << numero1 * numero2;
    std::cout << std::endl;
    std::cout << "La division es: " << numero1 / numero2;
    std::cout << std::endl;
    std::cout << "raiz de " << numero1 << " es " << sqrt(numero1);
    std::cout << std::endl;
    std::cout << "raiz de " << numero2 << " es " << sqrt(numero2);
    std::cout << std::endl;
    return 0;
    */

    float b, h, a;
    std::cout << "base del triangulo:\n";
    std::cin >> b;
    std::cout << "altura del triangulo:\n";
    std::cin >> h;
    a = (b * h) / 2;
    std::cout << "el area del triangulo es: " << a << std::endl;

    std::cout << "Triangulo isoceles";
    float lado1, lado2, a2;
    std::cout << "lados del triangulo iguales\n";
    std::cin >> lado1;
    std::cout << "lado diferente\n";
    std::cin >> lado2;
    a2 = (lado2 * sqrt(pow(lado1, 2) - pow(lado2, 2 / 4)) / 2;
    std::cout << "area del triangulo isoceles " << a2 << std::endl;

    std::cout << "Triangulo Escaleno";
    float


    float pi, r, a2;
    std::cout << "radio del circulo: \n";
    std::cin >> r;
    pi = 3, 14;
    a2 = pi * pow(r, 2);
    std::cout << "el area del circulo es: " << a2 << std::endl;

    float l, a3;
    std::cout << "lado del cuadrado: \n";
    std::cin >> l;
    a3 = pow(l, 2);
    std::cout << "el area del cuadrado es: " << a3 << std::endl;

}
