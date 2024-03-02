#include "Data.h"

void Data::producer() {
    int data = 0, MaxSize = 1;
    while(true) {
        unique_lock<mutex> lock(Mutex);
        producerCV.wait(lock, [&]{return MaxSize > linkedList.sizeList();});
        linkedList.insertNode(data++);
        linkedList.printList();
        lock.unlock();
        consumerCV.notify_one();
        sleep(1);
    }
}

void Data::consumer() {
    while(true) {
        unique_lock<mutex> lock(Mutex);
        consumerCV.wait(lock, [&]{return !linkedList.isEmpty();});
        int positionCake = linkedList.front();
        cout<< "Consumer ate cake " << positionCake << endl;
        linkedList.removeFristNode();
        lock.unlock();
        producerCV.notify_one();
    }
}