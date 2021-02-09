#include <iostream>
#include <cmath>
#include <complex>
#include <vector>
#include <valarray>

using namespace std;


int getsize(int n) {
    n--;
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    n++;
    return n;
}


//references 
//http://web.cs.iastate.edu/~cs577/handouts/polymultiply.pdf
//https://www.youtube.com/watch?v=htCj9exbGo0

void ftt(valarray<complex<double>> &arr){

    int size = arr.size();
    if(size == 1){
        return;
    }
    
    int m = size/2;
	
	//http://www.cplusplus.com/reference/valarray/slice/
	
	valarray<complex<double>> even = arr[slice(0,m,2)];
	valarray<complex<double>> odd = arr[slice(1,m,2)];    
	
	ftt(even);
    ftt(odd);
	
    for(int j =0; j < m; j++){

        complex<double> cmplxexponential =
            polar(1.0, -2.0*M_PI*j/size) * odd[j];

        arr[j] = even[j] + cmplxexponential;
        arr[j+m] = even[j] - cmplxexponential;
    }

}

void ifft(valarray<complex<double>>& arr) {
    arr = arr.apply(conj);
    ftt(arr);
    arr = arr.apply(conj);
    arr /= arr.size();
}
	

int main(){
    int n, degree1, degree2;

    cin >> n;
    cin >> degree1;
    degree1+=1;
    vector<complex<double>> poly1(degree1);
    for(int i =0; i < degree1; i++){
        double v1;
        cin >> v1;
        poly1[i] = {v1, 0};
    
    }
    
    cin >> degree2;
    degree2+=1;
    vector<complex<double>> poly2(degree2);
    for(int i =0; i < degree2; i++){
        double v2;
        cin >> v2;
        poly2[i] = {v2,0};
    }

    
    int size = degree1 + degree2 - 1;
    size = getsize(size);
	
	valarray<complex<double>> f1(size);
	valarray<complex<double>> f2(size);
	valarray<complex<double>> f3(size);
	
	for(int i =0; i < degree1; i++) {
		f1[i] = poly1[i];
	}
	
	for(int i =0; i < degree2; i++) {
		f2[i] = poly2[i];
	}
        
    ftt(f1);
    ftt(f2);

	for(int i = 0; i < f3.size(); i++) {
		f3[i] = f1[i] * f2[i];
	}
	

	 ifft(f3);


	
    int coef = degree1+degree2 -2;
	cout << coef << endl;
	for(int i = 0; i < degree1+degree2-1; i++) {
		int num = ceil(f3[i].real()-.00001);
		cout << num << " ";
	}
    
 
    return 0;
}