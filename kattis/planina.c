#include <stdio.h>

int calc_pow(int x, int y){ 
    if(y != 0){
        return (x * calc_pow(x, y-1));
    }   
    return 1;
}


int main(){
    int n = 0;
    scanf("%d", &n);
    printf("%d", calc_pow((calc_pow(2,n) + 1), 2));
    
    return 0;
} 
