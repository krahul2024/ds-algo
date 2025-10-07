#include <iostream>
#include <cstdint>

int main() {
    int64_t n;
    std::cin >> n;

    int64_t ans = 0, i = 1;

    while (i <= n) {
        i *= 5;
        ans += (n / i);
    }

    std::cout << ans << "\n";
}
