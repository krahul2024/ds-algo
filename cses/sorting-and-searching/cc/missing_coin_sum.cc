#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> coins(n);
    for (int i = 0; i < n; i++)
        std::cin >> coins[i];

    std::sort(coins.begin(), coins.end());

    // the simplest solution is if the next element in array
    // is larger than the total sum so far it means, sum_so_far + 1
    // can't be made, it makes sense, wtf
    int64_t sum_coins = 0;
    for (auto& c: coins) {
        if (c > (sum_coins + 1))
            break;

        sum_coins += c;
    }

    std::cout << sum_coins + 1 << '\n';
    return 0;
}
