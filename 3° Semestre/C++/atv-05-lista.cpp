/*
    5-Desenvolva um programa que contenha um procedimento que receba três notas por
parâmetro e uma letra. O procedimento deverá calcular a média aritmética caso receba a
letra A e a média ponderada, com os respectivos pesos 2,3 e 4, caso receba a letra P.
*/

#include <iostream>
#include <windows.h>

using namespace std;

void CalcularMedias(float n1, float n2, float n3, char opcao);

int main()
{

    UINT CPAGE_UTF8 = 65001; // Define codificação UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);

    

    float n1, n2, n3;
    char opcao;
    char validar;

    do
    {   
        cout << "Informe sua 1º Nota: " << endl;
        cin >> n1;
        cout << "Informe sua 2º Nota: " << endl;
        cin >> n2;
        cout << "Informe sua 3º Nota: " << endl;
        cin >> n3;
        cout << "Agora Escolha qual tipo de Média deseja utilizar (A)-Media Aritmética ou (P)-Média Ponderada:  ";
        cin >> opcao;
        

        validar = tolower(opcao);
        CalcularMedias(n1,n2,n3,opcao);

    } while (validar != 'a' || validar != 'p');
    return 0;
}

void CalcularMedias(float n1, float n2, float n3, char opcao)
{   
    //Media Aritmética
    if(opcao == 'a'){
        float media;

        media = ((n1+n2+n3)/3);
        cout<<"Média Aritmética Final Do Aluno: "<<media<<endl;
        
        
    }
    //Media Ponderada Sendo (N1 = Peso 2, N2 = Peso 3, N3 = Peso 4)
    else if(opcao == 'p'){
        float media;
        media = (((n1 * 2) + (n2 * 3) + (n3 * 4)) / 9);
        cout<<"Média Ponderada Final do Aluno: "<<media<<endl;  
        
    }
    else {
        system("cls");
    }
}

