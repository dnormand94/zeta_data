#include <stdio.h>
#include <math.h>
#include "isPrime.h"

int zeta(int ord, int arg){

	int sum=0;
	int y1;
	int y2;
	int count=0;
	long var1=1;

	if(isPrime(ord)==1){
		for(y1=1;y1<ord;y1++){
			for(y2=1;y2<=arg;y2++){
				var1=var1*y1;
				if(var1>=ord){
					var1=var1%ord;
				}
			}
			sum=sum+var1;
			if(sum>=ord){
				sum=sum%ord;
			}
			var1=1;
		}
		
		return (sum);
	}

	else{for(y1=1;y1<ord;y1++){
		for(y2=1;y2<ord;y2++){
			if((y1*y2)%ord==1){
				count++;
			}
		}
	}

	long invrs[2][count];
	count=-1;

	for(y1=1;y1<ord;y1++){
		for(y2=1;y2<ord;y2++){
			if((y1*y2)%ord==1){
				count++;
				invrs[0][count]=y1;
				invrs[1][count]=y2;
			}
		}
	}

	for(y1=0;y1<=count;y1++){
		var1=1;
		for(y2=1;y2<=arg;y2++){
			var1=var1*invrs[1][y1];
			var1=var1%ord;
		}
		sum=sum+var1;
		if(sum>=ord){
			sum=sum%ord;
		}
	}

	return (sum);	
	
	}
}
