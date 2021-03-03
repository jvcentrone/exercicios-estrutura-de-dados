#include <iostream>
//João Vitor Teles Centrone 03D 32033125

using namespace std;

int Max(int x, int y)
{

    if (x > y)
    {
        cout << "O maior numero e o " << x;
    }else if (y > x)
    {
        cout << "O maior numero e o " << y;
    }else if (x == y)
    {
        cout << "os numeros sao iguais";
    }
     

}


int main(){

    int valor1;
    int valor2;
    int maior;

    cout << "Digite o valor dos numeros ";
    cin >> valor1;
    cin>> valor2;

    maior = Max(valor1,valor2);

    
}
