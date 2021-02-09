#include <stdio.h>

int tick=4;

int main(){
    int n, h, v, piece=0, b = 0;    
    scanf("%d %d %d", &n, &h, &v);    
    piece = h*v*tick;
    b = piece < (h*(n-v)*tick) ? 1:0;    
    if(b){
        piece = (h*(n-v)*tick);   
        b=0;
    }    
    b = piece < ((n-h)*v*tick) ? 1:0;    
    if(b){
        piece = ((n-h)*v*tick);   
        b=0;
    }    
    b = piece < ((n-h)*(n-v)*tick) ? 1:0;
    if(b){
        piece = ((n-h)*(n-v)*tick);   
        b=0;
    }
    printf("%d", piece);

    
    return 0;
}