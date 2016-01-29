#include <stdio.h>
#include <math.h>
#include "eulerphi.h"

int main(){

	int n;

	printf("Please enter an integer: ");
	scanf("%d", &n);
	printf("\n\n");
	printf("phi(%d)=%d\n\n",n,phi(n));

}
