#include <iostream>
#include <vector>

int main() {
    int n, x;
    std::cin >> n >> x;
    std::vector<int> prices(n), pages(n);

    for (int i = 0; i < n; i++)
        std::cin >> prices[i];

    for (int i = 0; i < n; i++)
        std::cin >> pages[i];

    std::vector<std::vector<int>> mem(n+1, std::vector<int>(x+1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= x; j++) {
            mem[i][j] = mem[i-1][j];

            if (j >= prices[i-1])
                mem[i][j] = std::max(mem[i][j], mem[i-1][j-prices[i-1]] + pages[i-1]);
        }
    }

    std::cout << mem[n][x] << '\n';
    return 0;
}
