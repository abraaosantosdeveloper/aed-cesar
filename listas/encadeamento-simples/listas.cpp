#include <iostream>

using namespace std;

typedef struct Node {
    int data;
    struct Node* nextValue;
} Node;

void printList(Node* list){
    Node* temp1 = list;
    while(temp1){
        cout << temp1->data << "->";
        temp1 = temp1->nextValue;
    }

    cout << "NULL \n";
}

Node* insertInStart(Node* list, int value){
    Node* newValue = new Node;
    newValue->data = value;
    newValue->nextValue = list;
    return newValue;
}

Node* insertInEnd(Node* list, int value){
    Node* newValue = new Node;
    newValue->data = value;
    newValue->nextValue = NULL;

    if(!list){
        return newValue;
    }

    Node* temp = list;
    while(temp->nextValue)
        temp = temp->nextValue;
    temp->nextValue = newValue;

    return list;
}


int main(){
    Node* list = NULL;

    list = insertInEnd(list, 10);
    list = insertInEnd(list, 20);
    list = insertInEnd(list, 30);

    printList(list);
    system("PAUSE");

    return 0;
}