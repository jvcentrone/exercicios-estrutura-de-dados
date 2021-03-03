#include <iostream>

using namespace std;

//João Vitor Teles Centrone 03D 32033125

int main()
{
    int valor1; 
    int valor2;
    int aux;

    cout << "Digite o valor 1 ";
    cin >> valor1;
    cout << "Digite o valor 2 ";
    cin >> valor2;

    aux = valor1;
    valor1 = valor2;
    valor2 = aux;

    cout << "O valor um e " << valor1;

    cout << "o valor dois e " << valor2;


}

