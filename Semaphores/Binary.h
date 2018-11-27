#ifndef SEMAPHOREDEMO_BINARY_H
#define SEMAPHOREDEMO_BINARY_H


#include <string>

class Binary {

private:

    bool open;

public:

    Binary();

    bool P();
    bool V();

    std::string output();

};


#endif //SEMAPHOREDEMO_BINARY_H