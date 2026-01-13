#include <cstdint>
#include <iostream>

int main() {
    int n, x;
    std::cin >> n;

    int64_t max_sum = -1000000007;
    int64_t sum_so_far = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> x;

        sum_so_far += x;
        max_sum = std::max(max_sum, sum_so_far);

        if (sum_so_far < 0) {
            sum_so_far = 0;
        }
    }

    std::cout << max_sum << '\n';
}
