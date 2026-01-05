#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <iostream>
#include <vector>
#include <set>

int main() {
    // std::freopen ("../input.txt", "r", stdin);

    int64_t n, m, diff, x;
    std::cin >> n >> m >> diff;

    std::vector<int64_t> applicants(n);
    std::multiset<int64_t> apartments;

    for (int i = 0; i < n; i++)
        std::cin >> applicants[i];

    std::sort (applicants.begin(), applicants.end());

    for (int i = 0; i < m; i++) {
        std::cin >> x;
        apartments.insert(x);
    }

    x = 0;
    for (auto& a: applicants) {
        auto iter_lb = apartments.lower_bound (a - diff);

        if (iter_lb != apartments.end() && *iter_lb <= (a + diff)) {
            apartments.erase (iter_lb);
            x++;
        }
    }

    std::cout << x << '\n';

    return 0;
}
