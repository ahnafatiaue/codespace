#include <stdio.h>

int main() {
    long long n, m, a; // using long long to avoid integer overflow
    scanf("%lld %lld %lld", &n, &m, &a);

    // calculate the number of flagstones needed for the length and width separately
    long long length_flagstones = (n + a - 1) / a; // round up using (n + a - 1) / a formula
    long long width_flagstones = (m + a - 1) / a;

    // calculate the total number of flagstones needed
    long long total_flagstones = length_flagstones * width_flagstones;
    printf("%lld\n", total_flagstones);

    return 0;
}
