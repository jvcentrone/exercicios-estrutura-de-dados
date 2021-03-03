#include <iostream>

using namespace std;
//João Vitor Teles Centrone 03D 32033125

int main()
{
    int aux;
    int limite;

    int a = 0;
    int b = 1;


    cout << "Digite ate que numero vai a sequencia ";
    cin >> limite;

    for ( int i = 0; i < limite; i++)
    {
        aux = a + b;
        a = b;
        b = aux;

        cout << " "<< aux;
    }
    


    
       


}