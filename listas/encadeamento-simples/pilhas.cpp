#include <iostream>

using namespace std;

typedef struct Node {
    char data;
    struct Node* nextValue;
}Node;

Node* stack(Node* top, char value){
    Node* newValue = new Node;
    newValue->data = value;
    newValue->nextValue = top;
    return newValue;
}

Node* unstack(Node* top, char* value){
    if(!top){
        return NULL;
    }
    Node* temp = top;
    *value = top->data;
    top = top->nextValue;
    delete temp;
    return top;
}

int main(){
    return 0;
}