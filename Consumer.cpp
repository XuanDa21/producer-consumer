#include "Consumer.h"

void Consumer::threadConsumer(Data& object) {
   thread threadConsumer(&Data::consumer, &object);
   threadConsumer.join();
}