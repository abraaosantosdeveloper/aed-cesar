#include <iostream>

using namespace std;

typedef struct Pessoa
{
    string nome;
    int idade;
    float altura;
} Pessoa;

int main()
{
    /*========================================================*/
    //                                                        //
    //                      Questão 1                         //
    //                                                        //
    /*========================================================*/

    Pessoa p;

    cout << "\nInsira o nome da pessoa: ";
    cin >> p.nome;
    cout << "Insira a idade da pessoa: ";
    cin >> p.idade;
    cout << "Insira a altura da pessoa: ";
    cin >> p.altura;
    cout << "\n\nNome: " << p.nome << "\nIdade: " << p.idade << "\nAltura: " << p.altura << "\n";
    system("Pause");

    return 0;
}