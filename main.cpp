#include <iostream>
#include "Semaphores/Counting.h"
#include "Semaphores/Binary.h"

int main() {
    std::string input;

    Counting* semaphoreCounting = new Counting();
    Binary* semaphoreBinary = new Binary();

    while(true) {
        bool counting = false;
        bool binary = false;

        std::cin >> input;
        if(!input.compare("counting"))  {
            counting = true;
            std::cout << "Counting Semaphore:" << std::endl;
        }
        if(!input.compare("binary"))  {
            binary = true;
            std::cout << "Binary Semaphore:" << std::endl;
        }

        while(binary)   {
            std::cout << semaphoreBinary->output() << std::endl;

            std::cin >> input;

            if (!input.compare("add")) {
                if (semaphoreBinary->P()) {
                    std::cout << "thread added" << std::endl;
                } else {
                    std::cout << "thread could not be added" << std::endl;
                }
            } else if (!input.compare("remove")) {
                if (semaphoreBinary->V()) {
                    std::cout << "thread removed" << std::endl;
                } else {
                    std::cout << "no thread to remove" << std::endl;
                }
            } else if(!input.compare("end"))    {
                counting = false;
            }
            else {
                std::cout << "unknown command";
            }
        }

        while(counting) {
            std::cout << semaphoreCounting->output() << std::endl;

            std::cin >> input;

            if (!input.compare("add")) {
                if (semaphoreCounting->P()) {
                    std::cout << "thread added" << std::endl;
                } else {
                    std::cout << "thread added to queue" << std::endl;
                }
            } else if (!input.compare("remove")) {
                if (semaphoreCounting->V()) {
                    std::cout << "thread removed" << std::endl;
                } else {
                    std::cout << "no thread to remove" << std::endl;
                }
            } else if(!input.compare("end"))    {
                counting = false;
            }
            else {
                std::cout << "unknown command";
            }
        }
    }

    return 0;
}