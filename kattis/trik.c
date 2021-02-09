#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void swapA(int * arr){
    int swap = arr[0];
    arr[0] = arr[1];
    arr[1] = swap;    
}

void swapB(int * arr){
    int swap = arr[1];
    arr[1] = arr[2];
    arr[2] = swap;   
}

void swapC(int * arr){
    int swap = arr[0];
    arr[0] = arr[2];
    arr[2] = swap;   
}

int main(){
    int arr[] = {0, 1, 1};
    int i = 0;    
    char ch[50];
    
    scanf("%s", ch);
    while(i < strlen(ch)){
        if(ch[i] == 'A'){
            swapA(&arr);  
        }
        else if(ch[i] == 'B'){
            swapB(&arr);
        }
        else if(ch[i] == 'C'){
            swapC(&arr);     
        } 
        i++;
    }
    
    if(arr[0] == 0)
        printf("%d", 1);
    if(arr[1] == 0)
        printf("%d", 2);
    if(arr[2] == 0)
        printf("%d", 3);
    return EXIT_SUCCESS;
}