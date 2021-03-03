#include <iostream>

using namespace std;
//João Vitor Teles Centrone 03D 32033125

int main()
{
    int number;
    int fat;
    fat = 1;

    cout << "Digite o numero ";

    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        fat = fat*i;
    }

    cout << "O fatorial e " << fat;

    return 0;
    
       


}