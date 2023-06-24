#include <stdio.h>
void daimeter(int x);
void perimeter(int y);
void area(int z);
int main(){
	int r;
	printf("Enter Radius : ");
	scanf("%d",&r);
	daimeter (r);
	perimeter(r);
	area(r);
	return 0;
}
void daimeter(int x){
	int d = x*2 ;
	printf("Daimeter is : %d\n",d);
}
void perimeter(int y){
	int pi= 22/7;
	float p;
	p= 2*pi*y;
	printf("Circumference is : %.2f\n",p);
}
void area(int z){
	int pi= 22/7;
	float v;
	v = pi*z*z;
	printf("Area is : %.2f",v);
}
