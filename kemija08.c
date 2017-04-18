#include <stdio.h>
#include <string.h>

int main() {
    int i = 0;
    char word[101];

    fgets(word, 101, stdin);    
    int size_of_word = strlen(word);

    for (i = 0; i <  size_of_word; ++i) {
        printf("%c", word[i]);
        if (word[i] == 'a' || word[i] == 'e' ||  word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
	    i += 2;
        }
    }

    return 0;
}
