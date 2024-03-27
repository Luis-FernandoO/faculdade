/*
    10-Desenvolva um programa que contenha um procedimento para mostrar a tabuada de
    um número. A tabuada deverá ser na forma:
    1 x N =
    2 x N =
    3 x N =
*/

#include <iostream>
#include <windows.h>

using namespace std;

void Tabuada(int num){
    for(int i = 0; i<=10; i++){
        int result = (i*num);
        cout<<i<<" x "<<num<<" = "<<result<<endl;
    }
}

int main(){
    UINT CPAGE_UTF8 = 65001; // Define codificação UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);

    int num;
    char cont;

    do {
        cout<<"Digite um Número para ver a Tabuada dele: "<<endl;
        cin>>num;

        Tabuada(num);

        cout<<"Deseja Continuar no Programa S/N: "<<endl;
        cin>>cont;
        system("cls");
        cont = tolower(cont);

        
    }while(cont == 's');
}