#include <stdio.h>
int main (){
	int a=20,b=30;
	int c;
	call(&a,&b);
	printf("sum %d",&c);
	return 0;
}
int call(int *a,int *b){
	int sum;
	sum = a+b;
	return sum;
}
