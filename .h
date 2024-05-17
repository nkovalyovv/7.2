#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>

struct Node {
    int data;
    Node* next;
};

Node* pushElement(Node* P1, int D, Node*& P2);
void printAddresses(Node* P1, Node* P2);
void deleteStack(Node* top);


#endif
