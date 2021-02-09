#include <stdio.h>

int main() {
    int best_index = 0, best_grades = 0, i = 0;
    for (i = 0; i < 5; i++) {
        int n1, n2, n3, n4;
        scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
        if (n1+n2+n3+n4 > best_grades) {
            best_grades = n1+n2+n3+n4;
            best_index = i+1;			
        }
    }
    printf("%d %d", best_index, best_grades);
	return 0;
}
