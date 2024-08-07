#include <iostream>
#include <algorithm>
#include <initializer_list>

int main() {
    std::initializer_list<int> numbers = {5, 8, 3, 10};
    int result = std::max({});
    std::cout << result;
    return 0;
}