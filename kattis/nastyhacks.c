#include <stdio.h>

int should_advertise(int r, int e, int c){
    return e - r - c;
}

int main(){
    int n, r, e, c;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d %d", &r, &e, &c);
        if(should_advertise(r,e,c) > 0){
            printf("advertise\n");
        }
        else if(should_advertise(r,e,c) < 0){
            printf("do not advertise\n");
        }
        if(should_advertise(r,e,c) == 0){
            printf("does not matter\n");
        }
    }
    return 0;
}