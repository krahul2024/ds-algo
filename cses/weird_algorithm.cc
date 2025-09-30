#include <cstdint>
#include <iostream>

int main() {
    int64_t n;
    std::cin >> n;

    while (n > 1) {
        std::cout << n << " ";
        if (n%2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
    }

    std::cout << n << "\n";

    return 0;
}
