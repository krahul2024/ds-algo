#include <cstdint>
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, x;
    std::cin >> n;

    std::vector<int> sticks(n);
    for (int i = 0; i < n; i++)
        std::cin >> sticks[i];

    std::sort (sticks.begin(), sticks.end());
    int median_stick = sticks[(n-1)/2];
    int64_t total_cost = 0;

    for(auto& s: sticks)
        total_cost += std::abs(s - median_stick);

    std::cout << total_cost << '\n';
    return 0;
}
