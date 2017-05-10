#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n, w, h;
    scanf("%d %d %d", &n, &w, &h);
    while(n-- > 0){
        int x;
        scanf("%d", &x);
        if(x*x <= w*w + h*h){
            printf("DA\n");
            continue;
        }   
        printf("NE\n");
    }
    return 0;
}
