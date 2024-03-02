#ifndef Consumer_h
#define Consumer_h
#include <thread>
#include "Data.h"
using namespace std;

class Consumer {

   public:
   
        void threadConsumer(Data&);

};

#endif