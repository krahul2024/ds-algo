#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

bool next_perm(std::string& str) {
    int i = str.size()-2;

    // by this we know the rightmost smallest element
    while (i >= 0 && str[i] >= str[i+1]) { // >= for going past equal elements, else it is stuck
        i--;
    }

    // it is the last perm
    if (i < 0) {
        std::reverse(str.begin(), str.end());
        return false;
    }

    int j = str.size()-1;
    while (j > i && str[j] <= str[i]) // looking for anything bigger than str[i] to the right of i(excl)
        j--;

    std::swap(str[i], str[j]);
    std::reverse(str.begin() + i + 1, str.end());
    return i >= 0; // might return true
}

int main() {
    std::string sin;
    std::getline(std::cin, sin);
    std::sort(sin.begin(), sin.end());


    std::vector<std::string> perms;
    do {
        perms.push_back(sin);
    } while(next_perm(sin));

    std::cout << perms.size() << "\n";
    for (auto str: perms) {
        std::cout << str << "\n";
    }
}
