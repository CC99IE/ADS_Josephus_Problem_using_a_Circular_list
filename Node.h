// Sincer am plans um pic la problema asta -Cata Boss (Catalin Chirita) on 10-May-2020, Local Time 01:12:19

#ifndef JOSEPHUS_NODE_H
#define JOSEPHUS_NODE_H


#include <type_traits>

class Node {
private:
    int val;
    Node * next;

public:
    void setVal(int)  ;
    int getVal() const;
    Node* getNext() const;
    void setNext(Node*);
};


#endif
