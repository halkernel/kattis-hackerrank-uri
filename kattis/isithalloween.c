#include <stdio.h>

int main() {
    int day;
    char month[3];        
    scanf("%s %d", month, &day);    
    if ((month[0] == 'D' && month[1] == 'E' && month[2] == 'C' && day == 25) ||
        (month[0] == 'O' && month[1] == 'C' && month[2] == 'T' && day == 31)) {
        printf("yup\n");
        return 0;
    }
    printf("nope\n");
    return 0;
}