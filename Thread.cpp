#include "Thread.h"

void Thread::threads(Data& object) {
    thread threadProducer(&Data::producer, &object);
    thread threadConsumer(&Data::consumer, &object);
    threadProducer.join();
    threadConsumer.join();
}



