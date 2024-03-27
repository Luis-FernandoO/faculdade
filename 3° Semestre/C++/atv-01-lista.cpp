/*
    1-Construa um programa que contenha uma sub-rotina que valide a nota de uma aluno. Se
a nota informada for menor do que zero ou maior que dez deverá retornar um valor
booleano falso. Enquanto a nota não for válida, retorno booleano falso, uma nova nota deve
ser informada. Não esqueça de informar ao usuário se a nota foi aceita ou não por meio de
uma mensagem.
*/

#include <iostream>
using namespace std;
bool validar_nota (float nota);
int main()
{
    bool v;
    float nota;
    do{
        cout<<"Nota: ";
        cin>>nota;
        v=validar_nota(nota);
    }while (v==false);
    return 0;
}
bool validar_nota (float nota)
{
    if(nota>=0 && nota <= 10)
    {
        cout<<"Nota valida!\n";
        return true;
    }
    cout<<"Nota invalida!\n";
    return false;
}
