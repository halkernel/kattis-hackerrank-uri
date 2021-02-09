#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    long long n1, n2;
    while(cin >> n1 >> n2){ 
        if(n1 > n2)
            cout <<  abs(n1 - n2) << endl;
        else    
            cout <<  abs(n2 - n1) << endl;          
    }
    return 0;
}
