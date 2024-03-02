#ifndef Node_h
#define Node_h
#include <cstddef>

class Node {

    public: 
        int data;
        Node* next;

        Node();

        Node(int data);

};

#endif