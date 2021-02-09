#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;  
    if(n1+n2 == n3)
        cout << n1 << "+" << n2 << "=" << n3 << endl;
    else if(n1-n2 == n3)
        cout << n1 << "-" << n2 << "=" << n3 << endl;
    else if(n1*n2 == n3)
        cout << n1 << "*" << n2 << "=" << n3 << endl;
    else if(n1/n2 == n3 && n1 % n2 == 0)
        cout << n1 << "/" << n2 << "=" << n3 << endl;
    else if(n1 == n2 + n3)
        cout << n1 << "=" << n2 << "+" << n3 << endl;
    else if(n1 == n2 - n3)
        cout << n1 << "=" << n2 << "-" << n3 << endl;
    else if(n1 == n2 * n3)
        cout << n1 << "=" << n2 << "*" << n3 << endl;       
    else if(n1 == n2 / n3 && n2 % n3 == 0)
        cout << n1 << "=" << n2 << "/" << n3 << endl;               
    return 0;
}
