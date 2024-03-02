#ifndef LinkedList_h
#define LinkedList_h
#include <iostream>
#include "Node.h"
using namespace std;

class LinkedList {
    private: 
    public: 

        Node *head;

        LinkedList();

        void insertNode(int);

        void removeFristNode();

        void frontNode();

        int front();

        int sizeList();

        bool isEmpty();
  
        void printList();

};

#endif