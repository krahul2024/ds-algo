#include <iostream>
#include <vector>

int main() {
    std::string str;
    std::cin >> str;

    int n = str.size();
    std::vector<std::vector<bool>> pal(n, std::vector<bool>(n, false));

    for (int i = 0; i < n; i++)
        pal[i][i] = true;

    std::pair<int, int> largest = std::make_pair(0, 0);

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (str[i] == str[j]) {
                pal[i][j] = pal[i+1][j-1];
            }

            if (pal[i][j] && (j-i+1) > (largest.second - largest.first + 1))
                largest = std::make_pair(i, j);
        }
    }

    std::cout << largest.first << ',' << largest.second << '\n';
    return 0;
}
