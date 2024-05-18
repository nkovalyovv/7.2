#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>

struct Node {
    int data;
    Node* next;
};

void random(Node*& top);
Node* push(Node* P1, int D, Node*& P2);
void printAddr(Node* P1, Node* P2);
void deleteStack(Node* top);

#endif
