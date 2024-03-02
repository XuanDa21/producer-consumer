#ifndef Data_h
#define Data_h
#include "LinkedList.h"
#include <mutex>
#include <condition_variable>
#include <unistd.h>
using namespace std;

class Data {
    public: 
        mutex Mutex;
        condition_variable producerCV, consumerCV;
        LinkedList linkedList;

        void producer();

        void consumer();

};

#endif