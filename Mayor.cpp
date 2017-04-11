/*Mayor.cpp
Idica cual de dos valores ingresados por el usuario es el mayor
Rodrigo Mollon, Legajo 162821-5
V 20170410.0
*/

#include <iostream>

int main ()
{
int a,b,c;
a=0; b=0; c=0;
std :: cout << "Ingrese el primer valor a comparar: \n";
std :: cin >> a;
std :: cout << "Ingrese el segundo valor a comparar: \n";
std :: cin >> b;
if (a == b)
	std :: cout << "Ambos numeros son iguales. \n";
else
{
    c = (a>b) ? a : b;
    std :: cout << "El mayor valor de los dos es: \n";
    std :: cout << c;
}

}