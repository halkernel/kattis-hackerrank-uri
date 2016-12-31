#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    if(b.length() > a.length())
        cout << "no";
    else
        cout << "go";
}
