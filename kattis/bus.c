#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int test;
    for (test = 0; test < n; test++) {
        int k;
        scanf("%d", &k);
        long double passengers = 0;
        while (k > 0) {
            passengers += 0.5;
            passengers *= 2;
            k--;
        }
        printf("%lli\n", (long long int) passengers);
    }
    return 0;
}
