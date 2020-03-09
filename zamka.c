#include <stdio.h>

int count_integer(int n){
    int sum = 0;
    while(n > 0){
        sum += n%10;
        n/=10;
    }    
    return sum;
}

int main(){
    int l, d, x, i, min=0, max=0;    
    scanf("%d %d %d", &l, &d, &x);    
    for(i = l; i <= d; i++){
        if(count_integer(i) == x){            
            min = i;
            break;            
        }
    }
    for(i = d; i >= l; i--){
        if(count_integer(i) == x){            
            max = i;
            break;            
        }
    }
    printf("%d\n%d", min, max);
    return 0;
}