#include <iostream>

using namespace std;
//João Vitor Teles Centrone 03D 32033125


int main()
{

   
       
   int vetor[6];

    for (int i = 0; i < 6; i++)
    {
        cout << "Digite o numero ";
        cin >> vetor[i]; 
    

    }

    for (int j = 0; j < 6; j++)
    {
        vetor[0]=vetor[5];
        vetor[1]=vetor[4];
        vetor[2]=vetor[3];
        vetor[5]=vetor[0];
        vetor[4]=vetor[1];
        vetor[3]=vetor[2];
        cout << vetor[j];

    }

   

   

    

    
    
    
       


}