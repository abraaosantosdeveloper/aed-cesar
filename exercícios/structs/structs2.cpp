#include <iostream>

using namespace std;

struct Student
{
    string name;
    int registration;
    float grade;
};

// Node for list creation
struct Node
{
    Student student;
    Node *next;
};

// Insert new node
Node *createNode(Student student, Node *next)
{
    Node *newNode = new Node;
    newNode->student = student;
    newNode->next = next;

    return newNode;
}

// Insert the created node in the end of the list
void insertAsLast(Node *&head, Student student)
{
    Node *newNode = createNode(student, nullptr);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *current = head;

    while (current->next != nullptr)
    {
        current = current->next;
    }

    current->next = newNode;
}

// Acess the head node and return display the list information
void displayList(Node *head)
{
    Node *current = head;

    while (current != nullptr)
    {
        cout << "------------------" << endl;
        cout << "Nome: " << current->student.name << endl;
        cout << "Matricula: " << current->student.registration << endl;
        cout << "Nota: " << current->student.grade << endl;
        cout << "------------------" << endl;

        current = current->next;
    }
}

// Basic average grade
float calcularMedia(float somatorioNotas, int dividendo)
{
    float media = somatorioNotas / dividendo;
    return media;
}

int main()
{
    /*========================================================*/
    //                                                        //
    //                      Question 2                        //
    //                                                        //
    /*========================================================*/

    // Create the head node
    Node *head = NULL;

    // Avg grade parameters
    float somatorioNotas = 0;
    int dividendo = 0;

    for (int i = 0; i < 2; i++)
    {
        int counter = i + 1;

        // Initialize an empty Student struct
        Student student;

        // Data entry
        cout << "Digite o nome do aluno " << counter << ": ";
        cin >> student.name;
        cout << "Digite a matricula do aluno " << counter << ": ";
        cin >> student.registration;
        cout << "Digite a nota do aluno " << counter << ": ";
        cin >> student.grade;

        // Insert the last node containing the student struct
        insertAsLast(head, student);

        // Define the counter of the sum of all grades and quotient
        somatorioNotas += student.grade;
        dividendo += 1;
    }

    // Display the list
    displayList(head);
    // Display the avg grade
    cout << "Media: " << calcularMedia(somatorioNotas, dividendo) << endl;
    system("Pause");

    return 0;
}