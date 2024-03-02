#include "LinkedList.h"
LinkedList::LinkedList() {
    head = NULL;
}

void LinkedList::removeFristNode() {

   if(head != NULL) {
        Node* temp = head;
        head = head->next; 
        free(temp); 
    }

}

int LinkedList::front() {
    return head -> data;
}

bool LinkedList::isEmpty() {
    if( !head )
      return 1;
   return 0;
}

int LinkedList::sizeList() {
    int count = 0; 
    Node* current = head; 
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

void LinkedList::insertNode(int data) {

    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;

}

void LinkedList::printList() {
    Node* temp = head;
    if (head == NULL) {
        return;
    }
  
    while (temp != NULL) {
        cout << "producer made cake " << temp -> data << endl;
        temp = temp -> next;
    }
}



