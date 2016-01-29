#include <stdio.h>
#include <math.h>

int isPrime(int p){
	
	int root=(long)(floor(sqrt(p)));
	int z1;
	int truth=0;

	if(p==2){
		truth=1;
	}
	if(p==3){
		truth=1;
	}
	for(z1=2;z1<=root;z1++){
		if((p%z1)==0){
			break;
		}
		if(z1==root){
			truth=1;
			break;
		}
	}

	return truth;

}
