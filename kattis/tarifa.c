#include <stdio.h>

int main()
{
    int months = 0, i = 0, megabytes = 0, sum = 0, megabytes_used = 0;
    scanf("%i", &megabytes);
    scanf("%i", &months);
    for(i = 0; i < months; i++){
        scanf("%d", &megabytes_used);
        sum+=(megabytes - megabytes_used);
    }
    sum+=megabytes;
    printf("%d", sum);
    return 0;
}
