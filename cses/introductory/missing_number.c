#include <stdint.h>
#include <stdio.h>

int main() {
    int64_t n;
    int64_t sum = 0;
    scanf ("%ld", &n);

    sum = (n * (n + 1)) / 2;

    int x;
    while (n-- > 1) {
        scanf ("%d", &x);
        sum -= x;
    }

    printf ("%ld\n", sum);

    return 0;
}
