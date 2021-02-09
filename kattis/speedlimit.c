#include <stdio.h>


int main(){    
    while(1){
        int n;
        scanf("%d", &n);
        if(n < 0){
            return 0;
        }
        int old_y = 0, x = 0, y = 0, sum = 0, i = 0;
        for(i = 0; i < n; i++){        
            scanf("%d %d", &x, &y);        
            sum+= x * (y- old_y);        
            old_y = y;        
        }
        printf("\n%d miles", sum);
    }
    
    return 0;
}