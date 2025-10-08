#include <cstdint>
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);
    int64_t sum = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
        sum += numbers[i];
    }

    int64_t target = sum / 2; // finding the number closest to this or >=
    int64_t closest = sum;

    for (int i = 0; i < (1<<n); i++) {
        int64_t sum = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1<<j)) {
                sum += numbers[j];
            }
        }

        if (sum >= target) {
            closest = std::min(closest, sum);
        }
    }

    std::cout << abs(closest * 2 - sum) << "\n";
}
