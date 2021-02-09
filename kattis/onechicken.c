#include <stdio.h>


int abs(int a){
	if(a < 0){
		return -a;
	}
	return a;
	
}

int main() {
	long int people, pieces;
	scanf("%ld %ld", &people, &pieces);

	char *spieces = "pieces";
	if (abs(people-pieces) == 1) {
		spieces = "piece";
	}
	if (people > pieces) {
		printf("Dr. Chaz needs %lld more %s of chicken!\n", people-pieces, spieces);
	} else {
		printf("Dr. Chaz will have %lld %s of chicken left over!\n", pieces-people, spieces);
	}
	return 0;
}
