#include <stdio.h>

int main(){
    float cost;
    int cases; 
    float sum =0;
    scanf("%f", &cost);
    scanf("%d", &cases);
    while(cases-- > 0){
        float a,b;
        scanf("%f %f", &a, &b);
        sum+=(a*b*cost);
    }
    printf("%.7f", sum);
    return 0;
}