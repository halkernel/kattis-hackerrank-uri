#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int defaultNumber[6] = {1,1,2,2,2,8};
    int userNumber[6];  
    for(int i = 0; i < 6; i++){
        int term;
        cin >> term;
        userNumber[i] = term;
    }
    for(int i = 0; i < 6; i++){
        cout << defaultNumber[i] - userNumber[i] << " ";
    }

return 0;   
}
