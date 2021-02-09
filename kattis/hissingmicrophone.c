#include <stdio.h>
#include <string.h>

int main(){
    char word[31];
    char * p;
    scanf("%s", word);
    p = strstr(word, "ss");
    if(p == NULL){
        printf("no hiss");
        return 0;        
    }
    printf("hiss");
    return 0;
}