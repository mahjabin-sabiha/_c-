#include <iostream>
#include <algorithm>

int main() {
    int result = __builtin_popcountll(250);
    std::cout << result;
    return 0;
}