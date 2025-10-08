#include <iostream>
#include <string>

int main() {
    std::string seq;
    std::cin >> seq;

    int curr_count = 1, max_count = 0;
    for (size_t i = 1; i<= seq.size(); i++) {
        if (seq[i] == seq[i-1]) {
            curr_count += 1;
        } else {
            max_count = std::max(max_count, curr_count);
            curr_count = 1;
        }
    }

    std::cout << max_count << "\n";
    return 0;
}
