#include <stdio.h>
int cube(int x);
int main(){
	int a,m;
	printf("Enter A Number To Find Cube : ");
	scanf("%d",&a);
	m = cube(a);
	printf("Cube Is : %d",m);
}
int cube(int x){
	int b;
	b=x*x*x;
	return b;
}
