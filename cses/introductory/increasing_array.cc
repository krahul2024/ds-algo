#include <cstdint>
#include <iostream>
int main() {
    int n;
    std::cin >> n;

    int64_t ops  = 0;
    int64_t prev = -1;
    int64_t curr;

    while (n--) {
        std::cin >> curr;
        if (prev == -1) {
            prev = curr;
            continue;
        }

        if (curr < prev) {
            ops += (prev - curr);
        } else {
            prev = curr;
        }
    }

    std::cout << ops << "\n";
    return 0;
}
