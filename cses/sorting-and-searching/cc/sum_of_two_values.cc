#include <cstdint>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

int main() {
    int n, sum;
    std::cin >> n >> sum;

    std::vector<std::pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    std::sort(arr.begin(), arr.end());
    int i = 0, j = n-1;

    while (i < j) {
        int64_t curr_sum = arr[i].first + arr[j].first;
        if (curr_sum == sum) {
            std::cout << arr[i].second << " " << arr[j].second << '\n';
            return 0;
        }

        else if (curr_sum < sum) i++;
        else if (curr_sum > sum) j--;
        else { i++; j-- ;}
    }

    std::cout << "IMPOSSIBLE\n";
    return 0;
}
