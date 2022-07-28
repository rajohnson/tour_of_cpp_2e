#include <iostream>
#include <vector>

int main() {
    std::vector<int> v {1,4,7,2,5,8,3,6,9};
    for(auto x: v) {
        std::cout << x << std::endl;
    }

    std::cout << std::endl << std::endl;

    for(auto i: {1, 2, 4, 5, 6, 8, 9}) {
        std::cout << i << std::endl;
    }
}
