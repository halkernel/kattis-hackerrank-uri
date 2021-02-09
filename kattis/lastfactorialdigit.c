#include <stdio.h>

int get_last_digit(int n){
    if(n < 10)
        return n;
    return n%10;
}

int fatorial(int n){
    int i = 0, sum=1;
    for(i = n; i > 0; i--){
        sum*=i;
    }
    return sum;
}

int main(){
    int n, o;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &o);
        printf("%d\n", get_last_digit(fatorial(o)));
    }        
    return 0;
}