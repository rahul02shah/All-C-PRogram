#include <stdio.h>
void fun(int *x,int *y){
	int z;
	z=*x;
	*x=*y;
	*y=z;
}
int main(){
	int a;
	int b;
	printf("Enter any Two Number : ");
	scanf("%d%d",&a,&b);
	fun (&a,&b);
	printf("%d and %d",a,b);
	return 0;
}

