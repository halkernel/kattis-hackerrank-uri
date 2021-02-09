 
#include <stdio.h>

int main()
{
    double p, bpm, var;
    int i, n, b;
    scanf("%d",&n);
    int result[n][2];
    while(n--){
        scanf("%d %lf", &b, &p);
        bpm = (60*(b/p)), var = 60/p;
        printf("%f %f %f\n", bpm - var, bpm, bpm + var);
    }

    return 0;
}

