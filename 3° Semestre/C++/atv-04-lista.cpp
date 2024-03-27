/*
    4-Construa um programa que contenha uma função, deve ser passado como parâmetro o
raio de uma esfera. A função deverá retornar o valor do volume da esfera.
*/

#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

float volume_esfera(float raio);

int main()
{
    UINT CPAGE_UTF8 = 65001; // Define codificação UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);

    float valor_raio;
    cout << "Olá Seja Bem-Vindo ao Calculo de Volume de Esferas!" << endl;
    cout << "Digite o valor do raio da esfera: ";
    cin >> valor_raio;

    volume_esfera(valor_raio);

    return 0;
}

float volume_esfera(float raio)
{
    float r;

    r = raio;

    float volume = ((4.0/3.0) * 3 * pow(r, 3)); // Número de PI sendo 3
    cout << "Volume da Esfera: " << volume << "m³" << endl;

    return volume;
}
