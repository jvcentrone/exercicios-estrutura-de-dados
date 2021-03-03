#include <iostream>

using namespace std;
//João Vitor Teles Centrone 03D 32033125

int main()
{
    int valor; 
    int resto;
    
    cout << "Digite o valor do numero ";

    cin >> valor;

    resto = valor%2;

    if (resto == 0)
    {
        cout << "O numero e par";
    }else{
        
        cout << "O numero e impar";
    }
    


}
