#include "Binary.h"


Binary::Binary() {
    open = true;
    running = 0;
}

bool Binary::V() {
    open = true;
    if(running > 0) {
        running -= 1;
        return true;
    }
    return false;
}

bool Binary::P() {
    if(open)    {
        running += 1;
        if(running == 10)   {
            open = false;
        }
        return  true;
    }
    return false;
}

std::string Binary::output() {
    std::string blockedStr;
    if(open) {
        blockedStr = "Semaphore open";
    } else {
        blockedStr = "Semaphore blocked";
    }
    return blockedStr;
}