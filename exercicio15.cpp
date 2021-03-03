#include <iostream>
#include <cmath>

using namespace std;
//João Vitor Teles Centrone 03D 32033125

int VowelsCount(int ponto1x, int ponto1y, int ponto1raio, int ponto2x, int ponto2y, int ponto2raio)
{

    int somaRaios;
    somaRaios = ponto1raio + ponto2raio;
    int distancia;
    distancia = sqrt((ponto2x - ponto1x)*(ponto2x - ponto1x) + (ponto2y - ponto1y)*(ponto2y - ponto1y));

    if (somaRaios >= distancia)
    {
        
        cout<<"true";
        
    }else{
        
        cout <<"false";
        
    }
    

}


int main(){

    int x1;
    int y1;
    int raio1;
    int x2;
    int y2;
    int raio2;
    int calculo;

    cout << "Digite o x do circulo 1 ";
    cin >> x1;
    cout << "Digite o y do circulo 1 ";
    cin >> y1;
    cout << "Digite o raio do circulo 1 ";
    cin >> raio1;

    cout << "Digite o x do circulo 2 ";
    cin >> x2;
    cout << "Digite o y do circulo 2 ";
    cin >> y2;
    cout << "Digite o raio do circulo 2 ";
    cin >> raio2;

    calculo = VowelsCount(x1,y1,raio1,x2,y2,raio2);

    
    
}