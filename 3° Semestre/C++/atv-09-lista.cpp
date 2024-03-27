/*
    9-Desenvolva um programa que contenha uma função que receba um número inteiro e
devolva o cálculo do fatorial.
*/
#include <iostream>
#include <windows.h>

using namespace std;

int CalculoFatorial(int num)
{
    if (num < 0)
    {
        return 0;
    }
    int resultado = 1;

    for (int i = 1; i<=num; i++){
        resultado  *= i;
    }
    return resultado;
}

int main()
{
    UINT CPAGE_UTF8 = 65001; // Define codificação UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);
    char cont;
    int num, result_fatorial;

    do
    {
        cout << "Calcule o Fatorial!" << endl;

        cout << "Digite um Número para saber o fatorial dele: " << endl;
        cin >> num;

        result_fatorial= CalculoFatorial(num);
        cout<<"Resultado Final do Fatorial: "<<result_fatorial<<endl;

        cout << "Deseja continuar com o Programa S/N" << endl;
        cin >> cont;
        system("cls");
        cont = tolower(cont);

    }while(cont == 's');
}