#include <iostream>
#include <vector>

int main() {
    int n, sum, mod = 1000000007;
    std::cin >> n >> sum;
    int coins[n];
    for (int i = 0; i < n; i++) {
        std::cin >> coins[i];
    }

    std::vector<int> ways(sum+1, 0);
    ways[0] = 1;

    for (int i = 1; i <= sum; i++) {
        for (int j = 0; j <n; j++) {
            if (i - coins[j] >= 0) {
                ways[i] = (ways[i]%mod + ways[i-coins[j]]%mod)%mod; // optimize this % using subtraction
            }
        }
    }

    std::cout << ways[sum] << '\n';
}
