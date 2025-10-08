#include <cstdint>
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int64_t mod = 1000000007;
    int64_t ans = 1;

    for (int i = 1; i<= n; i++) {
        ans = (ans * 2) % mod;
    }

    std::cout << ans << "\n";
}
