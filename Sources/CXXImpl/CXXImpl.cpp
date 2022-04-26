#include "include/CXXImpl.hpp"

// Nothing
int my_function(int a, int b) {
    return a + b;
}

int doSomethingWithLife(const Life& life) {
    Life();
    printf("life.my_life: %d", life.my_life);
}


Life::Life() {
    printf("Created life\n");
}

Life::~Life() {
    printf("Destroyed Life\n");
}
