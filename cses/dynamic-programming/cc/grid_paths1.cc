#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<char>> grid(n, std::vector<char>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> grid[i][j];
        }
    }

    int mod = 1000000007;
    std::vector<std::vector<int>> paths(n+1, std::vector<int>(n+1, 0));
    if (grid[0][0] == '.') {
        paths[1][1] = 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (grid[i-1][j-1] == '.') {
                paths[i][j] += (paths[i-1][j] % mod + paths[i][j-1] % mod) % mod;
            }
        }
    }

    std::cout << paths[n][n] << '\n';
    return 0;
}
