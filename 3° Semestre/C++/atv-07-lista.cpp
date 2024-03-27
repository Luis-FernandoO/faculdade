/*
    7-Desenvolva um programa que contenha uma função que devolva um booleano
verdadeiro se o número informado for primo e falso caso não seja.
*/

#include <iostream>
#include <windows.h>

using namespace std;

bool NumeroPrimo(int num)
{
    if(num <= 1){
        return false;
    }
    for (int i = 2; i * i<= num;++i ){
        if (num % i == 0 ){
            return false;
        }
    }
    return true;
}

int main()
{
    UINT CPAGE_UTF8 = 65001; // Define codificação UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);

    int num;
    char continuar, opcao_continuar;

    do
    {
        cout << "Digite um Número para saber se ele é um número primo: " << endl;
        cin >> num;

        if(NumeroPrimo(num)){
            cout<<"Número Primo!"<<endl;
        }
        else{
            cout<<"Não é um Número Primo!"<<endl;
        }

        cout<<"Deseja Continuar S/N: "<<endl;
        cin>>continuar;
        system("cls");

        opcao_continuar = tolower(continuar);
    } while( opcao_continuar == 's');
    return 0;
}

