#include <cstdint>
#include <iostream>
#include <set>

int main() {
    int n, m, x;
    std::cin >> n >> m;

    std::multiset<int64_t> tickets;
    for (int i = 0; i < n; i++) {
        std::cin >> x;
        tickets.insert (x);
    }

    for (int i = 0; i < m; i++) {
        std::cin >> x;

        auto iter_ub = tickets.upper_bound (x);
        if (iter_ub != tickets.begin()) {
            iter_ub --;
            std::cout << *iter_ub << "\n";
            tickets.erase (iter_ub);
        } else {
            std::cout << -1 << "\n";
        }
    }

    return 0;
}
