// Commit 2: C++ file with bad format
// This should trigger clang-format check failure
#include<iostream>

void    bad_function    (    int    x    ,    int    y    ){
    int    result    =    x    +    y;
    std::cout    <<    result    <<    std::endl;
}

class    BadClass{
public:
    int    value;
    void    method(    void    );
};
