#include <stdio.h>

int candles(int cand){
    if(cand == 2)
        return cand;
    return cand + candles(cand-1);
}

int main(){
    int cases, day, candle;
    scanf("%d", &cases);
    while(cases-- > 0){ 
        scanf("%d %d", &day, &candle);   
        candle = candles(candle+1);
        printf("%d %d\n", day, candle == 0 ? 2 : candle);
    }
    return 0;
}
