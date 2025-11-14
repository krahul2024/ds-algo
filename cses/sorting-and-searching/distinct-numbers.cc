#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    size_t n;
    std::cin >> n;

    std::vector<int> numbers(n);
    for (size_t i = 0; i < numbers.size(); i++) {
        std::cin >> numbers[i];
    }

    std::sort(numbers.begin(), numbers.end());
    int uniq_count = 1;

    for (size_t i = 1; i < n; i++) {
        if (numbers[i] != numbers[i-1]) {
            uniq_count++;
        }
    }

    std::cout << uniq_count << "\n";
}
