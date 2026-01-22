#include <map>
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int songs[n];
    for (int i = 0; i < n; i++)
        std::cin >> songs[i];

    std::map<int, int> index;
    index[songs[0]] = 0;
    int maxLen = 1, i = 0, j = 1;

    while (i < j && j < n) {
        if (index.find(songs[j]) != index.end()) {
            int idx = index[songs[j]];
            while (i <= idx) {
                index.erase(songs[i]);
                i++;
            }
        }

        index[songs[j]] = j;
        if (maxLen < (j-i+1))
            maxLen = j - i + 1;
        j++;
    }

    std::cout << maxLen << '\n';
}
