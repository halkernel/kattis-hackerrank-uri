#include <stdio.h>
#include <math.h>

int main(){
	double h, v;
	double pi = 3.14159265359;
	scanf("%lf %lf", &h, &v);
	double rad = (pi/180) * v;
	int res =ceil(h/sin(rad));
	printf("%d", res);
	return 0;
}
