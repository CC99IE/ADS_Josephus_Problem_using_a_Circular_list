// Nici macar o eroare,Doamne ajuta! -Cata Boss (Catalin Chirita) on 10-May-2020, Local Time 01:11:30

#include "Node.h"

int Node::getVal() const {
    return this->val;
}

void Node::setVal(int n) {
    this->val= n;
}

void Node::setNext(Node * node) {
    this->next = node;
}

Node *Node::getNext() const {
    return this->next;
}