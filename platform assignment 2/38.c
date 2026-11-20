//— Pairs with equal digit sums
#include <stdio.h>

#define MAX_N 10000

int digitSum(long long x) {
    int sum = 0;
    while (x > 0) {
        sum += (int)(x % 10);
        x /= 10;
    }
    return sum;
}

int sums[MAX_N];

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n > MAX_N) n = MAX_N;

    for (int i = 0; i < n; i++) {
        long long v;
        scanf("%lld", &v);
        sums[i] = digitSum(v);
    }

    long long count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sums[i] == sums[j]) count++;
        }
    }

    printf("%lld\n", count);
    return 0;
}

39. Question 5 — Closest pair difference
VS Code | Medium
#include <stdio.h>

#define MAX_N 10000

int a[MAX_N];

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n > MAX_N) n = MAX_N;

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    if (n < 2) {            // need at least two values to form a pair
        printf("0\n");
        return 0;
    }

    long long best = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long diff = (long long)a[i] - a[j];
            if (diff < 0) diff = -diff;
            if (best == -1 || diff < best) best = diff;
        }
    }

    printf("%lld\n", best);
    return 0;
}

