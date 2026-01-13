#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <set>
#include <iostream>

int main() {
    // std::freopen ("../input.txt", "r", stdin);

    int n_child, gdl_wt, x;
    std::cin >> n_child >> gdl_wt;

    std::multiset<int> ch_wts;
    for (int i = 0; i < n_child; i++) {
        std::cin >> x;
        ch_wts.insert (x);
    }

    int64_t curr_gdl_cap = gdl_wt;
    int gdl_cnt = 0;
    int max_child_cnt = 2;

    while (!ch_wts.empty()) {
        if (curr_gdl_cap == gdl_wt && max_child_cnt == 2)
            gdl_cnt += 1;

        auto iter_ub = ch_wts.upper_bound (curr_gdl_cap);
        if (iter_ub != ch_wts.begin() && max_child_cnt > 0) {
            iter_ub --;

            curr_gdl_cap  -= (*iter_ub);
            max_child_cnt -= 1;

            ch_wts.erase (iter_ub);

            if (curr_gdl_cap == 0 || max_child_cnt == 0) {
                curr_gdl_cap = gdl_wt;
                max_child_cnt = 2;
            }
        } else {
            curr_gdl_cap  = gdl_wt;
            max_child_cnt = 2;
        }

    }

    std::cout << gdl_cnt << "\n";

    return 0;
}
