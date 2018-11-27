cmake_minimum_required(VERSION 3.12)
project(SemaphoreDemo)

set(CMAKE_CXX_STANDARD 14)

add_executable(SemaphoreDemo main.cpp Semaphores/Binary.cpp Semaphores/Binary.h Semaphores/Counting.cpp Semaphores/Counting.h)