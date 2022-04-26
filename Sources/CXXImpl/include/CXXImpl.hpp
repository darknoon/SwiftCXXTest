#include <stdio.h>

#ifdef __cplusplus
//namespace CXXImpl {

class Life {
public:
    int my_life;
    
    Life() {
        printf("Created life\n");
    }
    
    ~Life() {
        printf("Destroyed Life\n");
    }
};

int my_function(int a, int b);

//};
#endif
