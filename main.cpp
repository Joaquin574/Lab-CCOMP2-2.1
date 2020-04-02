#include <iostream>
/*
int main()
{
	std::cout << "Hola mundo\n";
	std::cout << "Me gustas\t" << "Tu y nadie mas";
	std::cout << "Me gusta mi carrera...\n";
}
*/
int main()
{
	int i1, i2, sum;
	std::cout << "Ingrese el 1er numero entero\n";
	std::cin >> i1;
	std::cout << "\nIngrese el 2do numero entero\n";
	std::cin >> i2;
	sum = i1 + i2;
	std::cout << "\n La suma es";
	std::cout << sum;
	std::cout << std::endl;
	return 0;
}