#include <stdio.h>
#include <simd/simd.h>

#ifdef __cplusplus

#include <vector>

struct Color {
    simd_float4 repr;
};

using ColorArray = std::vector<Color>;

class Life {
public:
    __attribute__((swift_name("life")))
    int my_life = 0;
    
    ColorArray colors = ColorArray();
    
    Life();

    ~Life();
    
    void doSomething() { }
    
    bool operator==(const Life& other) {
      return my_life == other.my_life;
    }

};



int my_function(int a, int b);

int doSomethingWithLife(const Life& life);

#endif
