#include <stdio.h>
#include <math.h>
#include "zeta.h"

int main(){

	int order;
	int argument;

	printf("Enter the order of Z/nZ: ");
	scanf("%d", &order);
	printf("\nEnter the argument of zeta: ");
	scanf("%d", &argument);

	printf("\n\n\n");

	if(isPrime(order)==1){
		printf("Z/%dZ is a finite field of prime order.\n\n", order);
	}
	else{
		printf("Z/%dZ is not a finite field of prime order.\n\n", order);
	}

	printf("Zeta_Z/%dZ(%d)=%d\n\n\n", order,argument,zeta(order,argument));

}
