#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

bool comp(std::pair<int, int> p1, std::pair<int, int> p2) {
    if (p1.second == p2.second)
        return p1.first < p2.first;

    return p1.second < p2.second;
}
int main() {
    int n_movies, x, y;
    std::cin >> n_movies;

    std::vector<std::pair<int, int>> times(n_movies);
    for (int i = 0; i < n_movies; i++)
        std::cin >> times[i].first >> times[i].second;

    std::sort (times.begin(), times.end(), comp);

    int max_cnt = 1;
    std::pair<int, int> movie = times[0];

    for (int i = 1; i < n_movies; i++) {
        if (movie.second <= times[i].first) {
            max_cnt += 1;
            movie = times[i];
        }
    }

    std::cout << max_cnt << "\n";

    return 0;
}
