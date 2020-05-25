#include <stdio.h>

int main() {
    int i, dice1, dice2;
    i = dice1 = dice2 = 0;
    scanf("%d %d", &dice1, &dice2);
    for (i = (dice1 > dice2) ? dice2+1 : dice1+1; 
         i <= ((dice1 > dice2) ? dice1+1 : dice2+1); 
         i++){

        printf("%d\n", i);

    }
    return 0;
}