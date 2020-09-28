#include <stdio.h>


#define max(a,b) \
   ({ __typeof__ (a) _a = (a); \
      __typeof__ (b) _b = (b); \
      _a > _b ? _a : _b; })

int main(){
    
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int maxi = max(b - a, c - b) - 1;
    printf("%d", maxi);
    return 0;
}
