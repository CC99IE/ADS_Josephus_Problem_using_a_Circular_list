// It's a proper miracle to be honest -Cata Boss (Catalin Chirita) on 10-May-2020, Local Time 01:11:10

#ifndef JOSEPHUS_LINKEDLIST_H
#define JOSEPHUS_LINKEDLIST_H


#include "Node.h"

class LinkedList {
private:
    Node * head;
    int size;

public:
    LinkedList();
    void append(int);
    void remove(int);
    void printAll() const;
    int getSize() const ;
    void setSize(int);
    Node* GH() const ;

    Node *findNode(int val) const;

    void startRemoval(int startingPoint);
};

#endif
