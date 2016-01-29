#include <stdio.h>
#include <math.h>

int phi(int n){

	int count1=0;
	int count2=0;
	int x;
	int y;
	int z;
	int prod=1;
	int var=n;

	for(x=2;x<=n;x++){/*Detects the number of primes up to n*/
		if(isPrime(x)==1){
			count1++;
		}
	}

	int factor[2][count1];/*Creates an array which will store primes which divide n and how may times they divide*/

	count1=0;

	for(x=2;x<=n;x++){ /*Assigns the primes which divide n to the first row*/
		if(isPrime(x)==1){
			factor[0][count1]=x;
			count1++;
		}
	}

	for(x=0;x<count1;x++){/*Assigns # of divisons to primes in array*/
		while((var%factor[0][x])==0){
			count2++;
			var=var/factor[0][x];
		}
		factor[1][x]=count2;
		count2=0;
		var=n;
	}

	for(x=0;x<count1;x++){/*Calculates the Euler phi function*/
		if(factor[1][x]>1){
			for(y=1;y<=factor[1][x]-1;y++){
				prod=prod*factor[0][x];
			}
		}
		if(factor[1][x]>0){
			prod=prod*(factor[0][x]-1);
		}
	}

	return(prod);
}
