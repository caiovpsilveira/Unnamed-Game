#include <iostream>

struct S {
    int a;
    int b;
};

int main() {
    std::cout << "Test" << std::endl;

    struct S testCpp20 {
        .a = 10, .b = 20
    };

    return 0;
}