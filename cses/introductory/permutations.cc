#include <cstdio>
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n == 2 || n== 3) {
        std::cout << "NO SOLUTION\n";
        return 0;
    }

    int x = n-1;

    while (x > 0) {
        printf ("%d ", x);
        x -= 2;
    }

    while (n > 0) {
        printf ("%d ", n);
        n -= 2;
    }

    std::cout << "\n";
}
