#include <stdio.h>

int main()
{
    int person_lifetime = 0, i = 0;
    float q =0, y=0;
    float sum = 0;
    scanf("%d", &person_lifetime);
    for(i = 0; i < person_lifetime; i++){
        scanf("%f %f", &q,&y);
        sum+=(q*y);
    }
    printf("%.3f", sum);
}

