#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

int main() {
    int n_customers, x, y;
    std::cin >> n_customers;

    std::vector<std::pair<int, int>> times; // leave & arrive

    for (int i = 0; i < n_customers; i++) {
        std::cin >> x >> y;
        times.push_back ({ y, x });
    }

    std::sort (times.begin(), times.end());

    return 0;
}
