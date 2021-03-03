#include <iostream>
//João Vitor Teles Centrone 03D 32033125

using namespace std;

int Min(int x, int y)
{

    if (x > y)
    {
        cout << "O menor numero e o " << y;
    }else if (y > x)
    {
        cout << "O menor numero e o " << x;
    }else if (x == y)
    {
        cout << "os numeros sao iguais";
    }
     

}


int main(){

    int valor1;
    int valor2;
    int menor;

    cout << "Digite o valor dos numeros ";
    cin >> valor1;
    cin>> valor2;

    menor = Min(valor1,valor2);

    
}

