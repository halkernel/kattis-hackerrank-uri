#include <stdio.h>

int main() {
    int a = 0, i = 0;
    scanf("%d %d", &a, &i);
    printf("%d\n", (a*i) - a + 1);
    return 0;
}