#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++)
        std::cin >> nums[i];

    int count = 1, prev_num = nums[0];
    for (int i = 1; i < n; i++) {
        if (prev_num > nums[i]) {
            count += 1;
        } else if (nums[i] > prev_num) {
            prev_num = nums[i];
        }
    }

    std::cout << count << '\n';
    return 0;
}
// 2 1 4 3 6 5 -> 4
