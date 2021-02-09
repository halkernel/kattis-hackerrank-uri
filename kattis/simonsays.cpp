#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    getline(cin, s); 
    while(t--){
        getline(cin, s);
        if(s.substr(0,10).compare("Simon says") == 0){
            cout << s.substr(11) << endl;
        }      
    }       
    return 0;
}
