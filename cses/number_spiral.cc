#include <cstdint>
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int64_t x, y, side, diff = 0;
    while (n--) {
        std::cin >> x >> y;
        side = std::max(x, y);
        diff = ( side % 2 == 0 ?
            abs(side - x) + abs(1 - y) :
            abs(1 - x) + abs(side - y)
        );
        printf ("%ld\n", (side * side) - diff);
    }
}
