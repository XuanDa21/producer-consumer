#include "Producer.h"

void Producer::threadProducer(Data& object) {
    thread threadProducer(&Data::producer, &object);
    threadProducer.join();
}
