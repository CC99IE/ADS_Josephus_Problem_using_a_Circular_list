// Even i am suprised it works. ~ Cata Boss (Catalin Chirita) on 10-May-2020, Local Time 01:10:31


#include "LinkedList.h"
#include <iostream>

Node *LinkedList::GH() const {
    return this->head;
}

LinkedList::LinkedList() {
    this->head = new Node();
    this->head->setNext(nullptr);
    this->head->setVal(1);
    this->size = 1;
}

void LinkedList::append(int mval) {
    Node *head = GH();

    Node *mNode = new Node();
    mNode->setVal(mval);
    if (head->getNext() == nullptr) {
        head->setNext(mNode);
        mNode->setNext(head);
    } else {
        Node *lNode = GH();
        for (int i = 1; i < this->size; i++) {
            lNode =lNode->getNext();
        }
        lNode->setNext(mNode);
        mNode->setNext(head);
    }

    this->size += 1;
}

void LinkedList::printAll() const {
    Node *lNode = GH();
    for (int i = 1; i <= this->size; i++) {
        std::cout << lNode->getVal() << " ";
        lNode = lNode->getNext();
    }
    std::cout << std::endl;
}

int LinkedList::getSize() const {
    return this->size;
}

void LinkedList::setSize(int size) {
    this->size = size;
}

void LinkedList::remove(int val) {
    Node *lNode = GH();
    Node *auxNode = GH();
    if (val == lNode->getVal()) {
        for (int i = 1; i < this->size; i++) {
            auxNode =auxNode->getNext();
        }
        auxNode->setNext(lNode->getNext());
        this->head = lNode->getNext();
        delete (lNode);
    } else {
        Node *precedent = GH();
        auxNode = precedent->getNext();
        for (int i = 2; i < this->size; i++) {
            if( auxNode->getVal() == val) break;
            precedent = precedent->getNext();
            auxNode = auxNode->getNext();
        }
        precedent->setNext(auxNode->getNext());
        delete (auxNode);
    }

    this->size-=1;
}



Node* LinkedList::findNode(int val) const {
    Node* currentNode = GH();

    while(currentNode->getVal() != val){
        currentNode = currentNode->getNext();
    }

    return currentNode;
}


void LinkedList::startRemoval(int startingPoint) {
    Node *removal = this->findNode(startingPoint);

    while (this->size > 1) {
            this->remove(removal->getNext()->getVal());
            removal = removal->getNext();
    }
}
