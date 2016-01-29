#include <stdio.h>
#include "eulerphi.h"
#include "zeta.h"

int main(){

	FILE *out;
	int start=1001;
	int end=2000;
	int x;
	int y;

	out=fopen("1001-2000.cvs", "w+");

	for(x=start;x<=end;x++){
		fprintf(out,"mod %d:",x);
		for(y=1;y<=phi(x);y++){
			if(y==phi(x)){
				fprintf(out,"(%d,%d)\n",y,zeta(x,y));
			}
			else{
				fprintf(out,"(%d,%d),",y,zeta(x,y));
			}
		}
	}

	fclose(out);

}
