#ifndef SEMAPHOREDEMO_COUNTING_H
#define SEMAPHOREDEMO_COUNTING_H


#include <string>

class Counting {

private:

    int counter;
    int queue;
    bool blocked;

    void block();
    void unblock();

public:

    Counting();

    bool P();
    bool V();

    std::string output();
};


#endif //SEMAPHOREDEMO_COUNTING_H