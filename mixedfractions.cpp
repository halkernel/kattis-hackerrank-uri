#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    long n1 = 0, n2 = 0;
    cin >> n1 >> n2;
    while(n1 != 0 && n2 != 0) {     
        cout << n1/n2 << " " << n1%n2 << " / " << n2 << endl;       
        cin >> n1 >> n2;
    }
    return 0;
}
