#include <iostream>

bool can_empty(int x, int y) {
    if (x > 2*y || y > 2 * x || (x+y) % 3 != 0)
        return false;
    return true;
}

int main() {
    int n;
    std::cin >> n;

    int x, y;
    while (n--) {
        std::cin >> x >> y;
        std::cout << (can_empty(x,y) ? "YES" : "NO") << "\n";
    }
}
