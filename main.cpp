#include <iostream>
#include "Semaphores/Counting.h"
#include "Semaphores/Binary.h"

int main() {
    std::string input;

    Counting* semaphoreCounting = new Counting();
    Binary* semaphoreBinary = new Binary();

    bool counting = false;
    bool binary = false;

        std::cin >> input;
        if(input == "counting")  {
            counting = true;
            std::cout << "Counting Semaphore:" << std::endl;
        }
        if(input == "binary")  {
            binary = true;
            std::cout << "Binary Semaphore:" << std::endl;
        }

        while(binary)   {
            std::cout << semaphoreBinary->output() << std::endl;

            std::cin >> input;

            if (input == "add") {
                if (semaphoreBinary->P()) {
                    std::cout << "thread added" << std::endl;
                } else {
                    std::cout << "thread could not be added" << std::endl;
                }
            } else if (input == "remove") {
                if (semaphoreBinary->V()) {
                    std::cout << "thread removed" << std::endl;
                } else {
                    std::cout << "no thread to remove" << std::endl;
                }
            } else if(input == "end")    {
                binary = false;
            }
            else {
                std::cout << "unknown command" << std::endl;
            }
        }

        while(counting) {
            std::cout << semaphoreCounting->output() << std::endl;

            std::cin >> input;

            if (input == "add") {
                if (semaphoreCounting->P()) {
                    std::cout << "thread added" << std::endl;
                } else {
                    std::cout << "thread added to queue" << std::endl;
                }
            } else if (input == "remove") {
                if (semaphoreCounting->V()) {
                    std::cout << "thread removed" << std::endl;
                } else {
                    std::cout << "no thread to remove" << std::endl;
                }
            } else if(input == "end")   {
                counting = false;
            }
            else {
                std::cout << "unknown command" << std::endl;
            }
        }

    return 0;
}