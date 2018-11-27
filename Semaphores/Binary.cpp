#include "Binary.h"


Binary::Binary() {
    open = true;
}

bool Binary::V() {
    if(!open)    {
        open = true;
        return true;
    }
    return false;
}

bool Binary::P() {
    if(open)    {
        open = false;
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