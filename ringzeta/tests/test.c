#include <stdio.h>
#include <math.h>
#include "isPrime.h"

int main(){

	int numb;
	scanf("%d", &numb);

	if(isPrime(numb)==1){
		printf("true\n");
	}

	else{
		printf("false\n");
	}

}
