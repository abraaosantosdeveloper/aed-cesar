/*

Defina uma struct para estruturar dados de alunos de uma escola. Dentro dessa struct, crie uma variavel para
armazenar o nome do aluno, e outras para armazenar as notas de matemática, física e a média dessas duas notas.
Após definir a struct, crie três variáveis do tipo struct que você criou. Preencha os nomes e as notas dos alunos,
calculando automaticamente a média deles.

*/

#include <iostream>
#include <string>

float media(float nota1, float nota2)
{
    return (nota1 + nota2) / 2;
}

int main()
{
    typedef struct
    {
        std::string nome;
        float notaMat, notaFis, media;
    } Aluno;

    Aluno a1, a2, a3;
    a1.nome = "Gustavo";
    a1.notaMat = 8.0;
    a1.notaFis = 7.0;
    a1.media = media(a1.notaMat, a1.notaFis);

    a2.nome = "Carlos";
    a2.notaMat = 9.0;
    a2.notaFis = 9.0;
    a2.media = media(a2.notaMat, a2.notaFis);

    a3.nome = "Joao";
    a3.notaMat = 8.0;
    a3.notaFis = 7.0;
    a3.media = media(a3.notaMat, a3.notaFis);

    std::cout << "Media do Aluno(a) " << a1.nome << ": " << a1.media << "\n";
    std::cout << "Media do Aluno(a) " << a2.nome << ": " << a2.media << "\n";
    std::cout << "Media do Aluno(a) " << a3.nome << ": " << a3.media << "\n";

    return 0;
}