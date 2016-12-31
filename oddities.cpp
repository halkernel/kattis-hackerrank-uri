#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int count, num;
    cin >> count;
    while(count--){
        cin >> num;
        if(num % 2 == 0){
            cout << num << " is even" << endl;
        }
        else{
            cout << num << " is odd" << endl;
        }
    }       
}
