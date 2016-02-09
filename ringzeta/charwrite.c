#include <stdio.h>
#include <math.h>
#include "character.h"
#include "zeta.h"

int main(){

	FILE *out;
	int start=1001;
	int end=2000;
	int x;
	int y;

	out=fopen("1001-2000(conj).csv", "w+");

	for(x=start;x<=end;x++){
		for(y=1;y<=phi(x);y++){
			if(y==phi(x)){
				fprintf(out,"%d,%d,%d\n\n",x,y,character(x,y));
			}
			else{
				fprintf(out,"%d,%d,%d\n",x,y,character(x,y));
			}
		}
	}

	fclose(out);

}
