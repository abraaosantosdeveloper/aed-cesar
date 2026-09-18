#include <iostream>

using namespace std;

typedef struct Node
{
    int value;
    struct Node *left;
    struct Node *right;
} Node;

// Node creation

Node *newNode(int value)
{
    Node *node = new Node;
    node->value = value;
    node->left = node->right = NULL;

    return node;
}

// Inserting new node

Node *insert(Node *root, int value)
{
    if (root == NULL)
        return newNode(value);

    if (value < root->value)
        root->left = insert(root->left, value);

    else if (value > root->value)
        root->right = insert(root->right, value);

    return root;
}

// Iteration algorithms

void preOrder(Node *root)
{
    if (root != NULL)
    {
        cout << " | " << root->value << " | ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << " | " << root->value << " | ";
        inOrder(root->right);
    }
}

void postOrder(Node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << " | " << root->value << " | ";
    }
}

int main()
{
    Node *root = NULL;

    int listaTestes[] = {20, 10, 30, 5, 15, 25, 35};

    int tamanho = sizeof(listaTestes) / sizeof(listaTestes[0]);

    printf("Inserindo os seguintes elementos na arvore: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", listaTestes[i]);
        // 2. Alimentando a árvore iterativamente com os elementos da lista
        root = insert(root, listaTestes[i]);
    }
    printf("\n\n");

    cout << "Arvore percorrida pre-ordem: ";
    preOrder(root);
    cout << "\n";

    cout << "Arvore percorrida em-ordem: ";
    inOrder(root);
    cout << "\n";

    cout << "Arvore percorrida pos-ordem: ";
    postOrder(root);
    cout << "\n";

    cout << "Pressione ENTER para encerrar...";
    getchar();

    return 0;
}