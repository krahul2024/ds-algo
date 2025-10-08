#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s;
    std::getline(std::cin, s);

    unsigned int count[26] = {0};
    for(auto c: s) {
        count[c-'A']++;
    }

    std::string pal;
    int odd_count = 0, odd_idx = -1;
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 == 1) {
            odd_idx = i;
            odd_count++;
        }

        if (odd_count > 1) {
            std::cout << "NO SOLUTION\n";
            return 0;
        }

        if (count[i] % 2 == 0)
            pal.append(std::string(count[i]/2, char('A' + i)));
    }

    std::cout << pal << (odd_idx >= 0 ? std::string(count[odd_idx], char('A' + odd_idx)) : "");
    std::reverse(pal.begin(), pal.end());
    std::cout << pal << "\n";
}
