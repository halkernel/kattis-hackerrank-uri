#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	string word;
	cin >> word;
	char lastChar = '_';
	for(auto iter = word.begin(); iter != word.end(); iter++){
		char character = *iter;
		if(character != lastChar)
			cout << character;
		lastChar = character;		
	}	
	return 0;
}



