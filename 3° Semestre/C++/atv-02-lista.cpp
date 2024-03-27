/*
    2-Implemente um programa que contenha uma subrotina que valide a entrada de
caracteres em um sistema. São permitidos apenas os caracteres A,a,P ou p. Caso algum
caractere seja diferente deverá retornar um valor falso e um novo caractere deve ser
informado. Não esqueça de informar ao usuário se a entrada foi aceita ou não.
*/


#include <iostream>
using namespace std;
bool valida_letra(char c);
int main()
{
    char ltr;
    bool v;
    do{
        cout<<"Informe a letra: ";
        cin>>ltr;
        v=valida_letra(ltr);
    }while(v==false);
    return 0;
}
bool valida_letra(char c)
{
    char c2;
    c2=tolower(c);  
    if(c2=='a'||c2=='p')
    {
        cout<<"Letra valida!\n";
        return true;
    }
    cout<<"Letra invalida\n";
    return false;
}