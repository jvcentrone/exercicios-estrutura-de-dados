#include <iostream>

using namespace std;
//João Vitor Teles Centrone 03D 32033125

int main()
{
    int valorx;
    int valory;
    int soma;

    cout << "Digite o valor de x ";
    cin >> valorx; 
    cout << "Digite o valor de y ";
    cin >> valory;

    soma = 3 * valorx + valory;

    if (soma == 8)
    {
        cout << "Esse ponto pertence a reta";
    }else{

        cout << "Esse ponto nao pertence a reta";

    }
       


}
