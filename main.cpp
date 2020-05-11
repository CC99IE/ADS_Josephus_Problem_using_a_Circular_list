// This miracle has been brought to you by Cata Boss (Catalin Chirita) on 10-May-2020, Local Time 01:10:22
#include <iostream>
#include "LinkedList.h"

LinkedList generate_list(int size){
    LinkedList josephusCircle;
    for(int i=2;i<=size;i++){
        josephusCircle.append(i);
    }
    return josephusCircle;
}

int main() {

    LinkedList l;
    int n,m;
    std::cout<<"How many do you want to be in the circle? ";
    std::cin>>n;

    std::cout<<"From where we start? ";
    std::cin>>m;

    l= generate_list(n);
    l.startRemoval(m);
    std::cout<<"The last man is ";

    l.printAll();
    std::cout<<"Congratulations!";

    return 0;
}