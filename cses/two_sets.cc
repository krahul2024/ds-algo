#include <cstdint>
#include <vector>
#include <iostream>

void print_vector(std::vector<int64_t>& v) {
    std::cout << v.size() << "\n";
    for (auto x: v) {
        std::cout << x << " ";
    }
    std::cout << "\n";
}

void okay(int n) {
    int64_t total = (int64_t)n * (n + 1) / 2;
    if (total % 2 != 0) {
        std::cout << "NO\n";
        return;
    }

    int64_t target = total / 2;
    std::vector<int64_t> set1, set2;

    for (int i = n; i >= 1; --i) {
        if (target - i >= 0) {
            set1.push_back(i);
            target -= i;
        } else {
            set2.push_back(i);
        }
    }

    std::cout << "YES\n";
    print_vector(set1);
    print_vector(set2);
}

int main() {
    int n;
    scanf("%d", &n);
    okay(n);
}

