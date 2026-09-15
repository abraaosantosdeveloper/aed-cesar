#include <iostream>
#include <string>
#include <limits>

/*

Crie um programa que leia a venda de 10 produtos (use um vetor).
De cada produto queremos saber o nome, preço, quantidade de um produto
vendido, e mostre também o valor total das vendas.
Use structs para estruturar os dados.

TODO:

- Coletar os dados do produto (nome, valor, quantidade)
- armazenar na posição do array de vendas correspondente à iteração
- calcular o valor total das vendas -> cada produto terá um preço total de valor * qtd

portanto, o subtotal será o somatório de preços totais

*/

std::string solicitar_dados_string(std::string solicitacao)
{
    // Recebe o label que vai ser exibido na solicitação do dado específico
    std::cout << solicitacao;

    // Remove quebra de linha pendente de leituras numéricas anteriores
    if (std::cin.peek() == '\n')
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Declara a variável que armazena o valor que vai ser retornado
    std::string entrada;

    // Lê o valor da variável e o retorna para armazenar na variável desejada
    std::getline(std::cin, entrada);
    return entrada;
}

int solicitar_dados_int(std::string solicitacao)
{
    // Recebe o label que vai ser exibido na solicitação do dado específico
    std::cout << solicitacao;

    // Declara a variável que armazena o valor que vai ser retornado
    int entrada;

    // verifica se não é \n
    // Lê o valor da variável e o retorna para armazenar na variável desejada
    while (!(std::cin >> entrada))
    {
        std::cout << "Entrada invalida. Digite um numero inteiro: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return entrada;
}

float solicitar_dados_float(std::string solicitacao)
{
    // Recebe o label que vai ser exibido na solicitação do dado específico
    std::cout << solicitacao;

    // Declara a variável que armazena o valor que vai ser retornado
    float entrada;

    // Verifica se não é \n
    // lê o valor da variável e o retorna para armazenar na variável desejada
    while (!(std::cin >> entrada))
    {
        std::cout << "Entrada invalida. Digite um numero: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return entrada;
}

// Calcula o valor dos produtos no que tange à quantidade
float calcular_valor(int quantidade, float preco)
{
    return quantidade * preco;
}

int main()
{
    typedef struct
    {
        std::string nome;
        float preco;
        int quantidade;

    } Produto;

    Produto vendas[10];
    float acumuladorSubtotal = 0.0;

    for (int i = 0; i < 10; i++)
    {
        vendas[i].nome = solicitar_dados_string("Digite o nome do Produto: ");
        vendas[i].preco = solicitar_dados_float("Digite o preco do Produto: ");
        vendas[i].quantidade = solicitar_dados_int("Digite a quantidade: ");
        acumuladorSubtotal += calcular_valor(vendas[i].quantidade, vendas[i].preco);
    }

    std::cout << "Subtotal: R$ " << acumuladorSubtotal;

    return 0;
}