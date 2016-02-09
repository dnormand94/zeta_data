#include <stdio.h>
#include <math.h>
#include "eulerphi.h"

int character(int ord, int arg){

	int m;
	int x;
	int y;
	int count1=0;
	int count2=0;
	int var1=1;
	int var2=1;
	int truth=0;

	for(x=2;x<=ord;x++){
		if(isPrime(x)==1){
			count1++;
		}
	}

	m=count1;
	count1=0;

	int n[4][m];
	for(x=2;x<=ord;x++){
		if(isPrime(x)==1){
			n[0][count1]=x;
			var1=ord;
			while(var1%x==0){
				count2++;
				var1=var1/x;
			}
			n[1][count1]=count2;
			if(count2>0){
				for(y=1;y<=count2;y++){
					var2=var2*n[0][count1];
				}
				n[2][count1]=var2;
				var2=1;
				n[3][count1]=phi(var1);
			}
			else{
				n[2][count1]=0;
				n[3][count1]=0;
			}
			count2=0;
			count1++;
		}
	}

	int zeta[m];
	for(x=0;x<m;x++){
		if(n[1][x]>0){
			if(n[0][x]==2){
				if(n[1][x]>1){
					if(arg%2==0){
						zeta[x]=(n[3][x]*(n[2][x]/n[0][x]))%(n[2][x]);
					}
					else{
						zeta[x]=0;
					}
				}
				else{
					zeta[x]=(n[3][x])%(2);
				}
			}
			else{
				if(arg%(n[0][x]-1)==0){
					zeta[x]=(n[3][x]*(n[2][x]/n[0][x])*(n[0][x]-1))%(n[2][x]);
				}
				else{
					zeta[x]=0;
				}
			}
		}
		else{
			zeta[x]=0;
		}
	}

	count1=0;
	count2=0;
	var1=1;

	for(x=0;x<m;x++){
		if(n[1][x]>0){
			break;
		}
		count2++;
	}
	
	while(truth!=1){
		count1++;
		var1=count1*n[2][count2]+zeta[count2];
		for(x=0;x<m;x++){
			if(n[1][x]>0){
				if(var1%n[2][x]!=zeta[x]){
					break;
				}
			}
			if(x==m-1){
				truth=1;
			}
		}
	}

	return(var1%ord);

}
