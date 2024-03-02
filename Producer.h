#ifndef Producer_h
#define Producer_h
#include <thread>
#include "Data.h"
using namespace std;

class Producer {

    public:
        void threadProducer(Data&);

};

#endif