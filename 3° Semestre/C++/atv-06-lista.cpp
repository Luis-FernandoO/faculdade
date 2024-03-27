/*
     6-Resolver o exercício 5 com o auxílio das sub-rotinas desenvolvidas nos exercícios 1 e 2.
*/

#include <iostream>
#include <windows.h>

using namespace std;

// Função para validar se a letra é 'a' ou 'p'
bool validarLetra(char letra)
{
    return (letra == 'a' || letra == 'p');
}

// Função para validar as notas no intervalo de 0 a 10
bool validarNotas(float nota1, float nota2, float nota3)
{
    return (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10 && nota3 >= 0 && nota3 <= 10);
}

// Função para calcular a média
void calcularMedia(float nota1, float nota2, float nota3, char letra)
{
    if (!validarLetra(letra) || !validarNotas(nota1, nota2, nota3))
    {
        cout << "Notas ou letra inválidas. Certifique-se de que as notas estão no intervalo de 0 a 10 e a letra é 'A' ou 'P'." << endl;
        return;
    }

    if (letra == 'a')
    {
        // Calcula a média aritmética
        float media = (nota1 + nota2 + nota3) / 3;
        cout << "Média aritmética: " << media << endl;
    }
    else if (letra == 'p')
    {
        // Calcula a média ponderada com pesos 2, 3 e 4
        float mediaPonderada = ((2 * nota1) + (3 * nota2) + (4 * nota3)) / 9;
        cout << "Média ponderada: " << mediaPonderada << endl;
    }
}

int main()
{


    UINT CPAGE_UTF8 = 65001; // Define codificação UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);

    float nota1, nota2, nota3;
    char letra, opcao;

    do
    {
        cout << "Digite a primeira nota: ";
        cin >> nota1;

        cout << "Digite a segunda nota: ";
        cin >> nota2;

        cout << "Digite a terceira nota: ";
        cin >> nota3;

        cout << "Digite 'A' para média aritmética ou 'P' para média ponderada: ";
        cin >> letra;
        opcao = tolower(letra);

        calcularMedia(nota1, nota2, nota3, opcao);

        cout << "Deseja calcular outra média? (S/N): ";
        cin >> letra;
        system("cls");

    } while (letra == 's');

    return 0;
}
