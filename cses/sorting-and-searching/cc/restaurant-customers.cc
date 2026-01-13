#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>

int main() {
    int n_customers, x, y;
    std::cin >> n_customers;

    std::vector<std::pair<int, int>> times(n_customers);
    std::map<int, int> pres_cnt;

    for (int i = 0; i < n_customers; i++) {
        std::cin >> times[i].first >> times[i].second;
        pres_cnt[times[i].first] = 1;
        pres_cnt[times[i].second] = -1;
    }

    int max_cnt = 0, so_far = 0;
    for (auto iter = pres_cnt.begin(); iter != pres_cnt.end(); iter++) {
        so_far += iter->second;
        max_cnt = std::max(max_cnt, so_far);
    }

    std::cout << max_cnt << "\n";

    return 0;
}
