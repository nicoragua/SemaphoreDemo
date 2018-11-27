#include "Counting.h"

Counting::Counting()   {
    counter = 10;
    blocked = false;
    queue = 0;
}

void Counting::block() {
    blocked = true;
}

void Counting::unblock() {
    blocked = false;
}

bool Counting::P() {
    if(!blocked) {
        counter -= 1;
        if(counter == 0)    {
            block();
        }
        return true;
    }
    queue += 1;
    return false;
}

bool Counting::V() {
    if(blocked) {
        unblock();
    }
    if(counter < 10) {
        if(queue > 0)   {
            queue -= 1;
        } else {
            counter += 1;
        }
    } else {
        return false;
    }
    return true;
}

std::string Counting::output()    {
    std::string blockedStr;
    if(blocked) {
        blockedStr = "blocked";
    } else {
        blockedStr = "unblocked";
    }
    return "Semaphor: (" + std::to_string(counter) + "/10), " + blockedStr + " , Queue: " + std::to_string(queue);
}