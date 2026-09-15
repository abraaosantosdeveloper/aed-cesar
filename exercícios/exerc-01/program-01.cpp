/*
Crie um programa que leia e apresente os dados de 3 funcionários.
Crie uma struct que contenha:
- nome
- idade
- salário
- data de nascimento.

O que se sabe é que a data de nascimento é do tipo Data, ou seja, uma outra struct
que contem os seguintes membros:
- dia e ano, ambos do tipo inteiro;
- mês do tipo string.

Crie um vetor de struct para registrar os dados dos 3 funcionários.
*/

#include <iostream>
#include <string>
#include <limits>

int main()
{
    struct NomeCompleto
    {
        std::string nome;
        std::string sobreNome;
    };

    struct Data
    {
        int dia, ano;
        std::string mes;
    };

    struct Func
    {
        NomeCompleto nomeCompleto;
        int idade;
        float salario;
        Data dataNascimento;
    };

    Func funcionarios[3];

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Insira o primeiro nome do funcionario " << i + 1 << ": ";
        std::getline(std::cin, funcionarios[i].nomeCompleto.nome);

        std::cout << "Insira o sobrenome do funcionario " << i + 1 << ": ";
        std::getline(std::cin, funcionarios[i].nomeCompleto.sobreNome);

        std::cout << "Insira a idade do funcionario " << i + 1 << ": ";
        std::cin >> funcionarios[i].idade;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Insira o dia do nascimento do funcionario " << i + 1 << ": ";
        std::cin >> funcionarios[i].dataNascimento.dia;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Insira o mes do nascimento do funcionario " << i + 1 << ": ";
        std::getline(std::cin, funcionarios[i].dataNascimento.mes);

        std::cout << "Insira o ano do nascimento do funcionario " << i + 1 << ": ";
        std::cin >> funcionarios[i].dataNascimento.ano;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Insira o salario do funcionario " << i + 1 << ": ";
        std::cin >> funcionarios[i].salario;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    for (int i = 0; i < 3; i++)
    {
        std::cout << "\nFuncionario " << i + 1 << ":\n";
        std::cout << "Nome: " << funcionarios[i].nomeCompleto.nome << " " << funcionarios[i].nomeCompleto.sobreNome << "\n";
        std::cout << "Idade: " << funcionarios[i].idade << "\n";
        std::cout << "Data de nascimento: " << funcionarios[i].dataNascimento.dia << "/" << funcionarios[i].dataNascimento.mes << "/" << funcionarios[i].dataNascimento.ano << "\n";
        std::cout << "Salario: " << funcionarios[i].salario << "\n";
    }

    return 0;
}