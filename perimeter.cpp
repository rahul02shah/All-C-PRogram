#include <stdio.h>
int perimeter(int x,int y){
	int s;
	s=2*(x+y);
	return s;
}
int area(int a,int b){
	int x;
	x=a*b;
	return x;	

}
int main(){
	int a,b,c,d;
	printf("Enter a length: ");
	scanf("%d",&a);
	printf("Enter a breadth: ");
	scanf("%d",&b);
	c=perimeter(a,b);
	d=area(a,b);
	printf("%d is perimeter",c);
	printf("%d is area",d);
	return 0;
}
