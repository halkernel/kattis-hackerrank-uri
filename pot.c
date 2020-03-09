#include <stdio.h>

int get_pow(int n){
    if(n >= 10){
        return n % 10;
    }    
    return 1;
}

int calc_pow(int x, int y){ 
    if(y != 0){
        return (x * calc_pow(x, y-1));
    }   
    return 1;
}


int main(){
    int n = 0, m = 0, sumx = 0;    
    scanf("%d", &n);
    while(n--){
        scanf("%d", &m);
        sumx += calc_pow(m > 10 ? m/10 : m, get_pow(m));
    }    
    printf("%d", sumx);
    
    return 0;
}