#include <stdio.h>
#include <math.h>
double power(double x,int y){
	double z;
	z= pow(y,x);
	return z;
}
int main(){
	double x,m;
	int y;
	printf("enter the number :");
	scanf("%lf",&x);
	printf("Enter the power :");
	scanf("%d",&y);
	m=power(x,y);
	printf("%lf",m);
}

