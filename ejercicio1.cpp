/*
*
*Ejercicio Feedback 1
*Autor:Anas Nali
*
*/
#include <iostream>
using namespace std;

int main () {

    int cantidad;
    float precio;

    cout << "Indroduce la cantidad de productos que se quieren comprar: ";
    cin >> cantidad;

    cout <<"Indroduce el precio unitario del producto: ";
    cin >> precio;


    cout << "El precio total a pagar es de: " << cantidad*precio << " euros" <<endl;
    return 0;

}