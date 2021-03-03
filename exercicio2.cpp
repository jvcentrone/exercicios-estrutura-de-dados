#include <iostream>

using namespace std;
//João Vitor Teles Centrone 03D 32033125

int main()
{

    int distancia;
    int tempo;
    int velocidade;

    cout << "Digite a distancia percorrida (km)  ";
    cin >> distancia;
    cout << "Digite o tempo que demorou (horas) ";
    cin >> tempo;

    velocidade = distancia/tempo;

    cout << "A velocidade media e " << velocidade;

    if (velocidade > 90)
    {
        cout << " A velocidade ficou acima de 90 Km";
    }



    


}
 