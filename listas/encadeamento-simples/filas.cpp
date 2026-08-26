#include <iostream>

using namespace std;

typedef struct Node {
    char data[50];
    struct Node* nextValue;
} Node;

typedef struct Queue {
    struct Node* beginning;
    struct Node* end;
} Queue;

int main(){

    return 0;
}