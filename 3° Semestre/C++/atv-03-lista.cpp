/*
    3-Escreva um programa que contenha uma sub-rotina e esta contenha dois números
inteiros como parâmetro. Apresente a soma dos dois números e a subtração e a divisão do
maior pelo menor. A subrotina não deve aceitar números iguais.
*/

#include <iostream>
using namespace std;
void operacoes(int a, int b);
int main()
{
    int a, b;
    do
    {
        cout << "Informe o 1o. num: ";
        cin >> a;
        cout << "Informe o 2o. num: ";
        cin >> b;   
    } while (a == b);
    if (a > b)
        operacoes(a, b);
    else
        operacoes(b, a);
    return 0;
}
void operacoes(int a, int b)
{
    // soma
    cout << "Soma: " << a + b << endl;
    // subtração
    cout << "Subtracao: " << a - b << endl;
    // divisão
    if (b == 0)
        cout << "Nao existe div por zero!\n";
    else
        cout << "Divisao: " << a / b;
}