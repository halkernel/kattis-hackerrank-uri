#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;


int main()
{
    int x, y, n, i = 1;;
	
	cin >> x >> y >> n;
	while(i <= n){
		if (i % x == 0 || i % y == 0){
			if(i % x == 0)
				cout << "Fizz";
			if (i % y == 0)
				cout << "Buzz";
		}
		else{
			cout << i;
		}
		cout << endl;	
		i++;
	}	
	return 0;
}

