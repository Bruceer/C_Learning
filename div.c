#include"stdio.h"
#include"math.h"

void div(double a, double b, double *p);

int main(void){
	double a = 512;
	double b = 34;
	double result;
	
	div(a,b,&result);
	printf("%1f div %1f is %2f\n", a, b, result);

	return 0 ;
}

void div(double a, double b, double *p){
	*p = a/b;
}


