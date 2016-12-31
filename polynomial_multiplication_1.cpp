#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <unordered_set>


using namespace std;

int main()
{
    int nCases;
    cin >> nCases;
    while(nCases--){
        int degree1, degree2;
        cin >> degree1;     
        int poly1[degree1];     
        for(int i = 0; i <= degree1; i++){
            int term;
            cin >> term;
            poly1[i] = term;
        }       
        cin >> degree2; 
        int poly2[degree2];     
        for(int i = 0; i <= degree2; i++){
            int term;
            cin >> term;
            poly2[i] = term;
        }
        cout << degree1 + degree2 << endl;
        int resultPoly[degree1+degree2];

        for(int i = 0; i <= degree1 + degree2; i++){
                resultPoly[i] = 0;
        }
        
        for(int i = 0; i <= degree1; i++){
            for(int j = 0; j <= degree2; j++){
                resultPoly[i+j] += poly1[i] * poly2[j];                             
            }
        }       
        
        for(int i = 0; i <= degree1 + degree2; i++){
                cout << resultPoly[i] << " ";
        }       
        cout << endl;
                
    }
    
    return 0;   
}
