#include <stdio.h>
void fun(int *a, int *b){
	 
	return (a);
	
}
int main(){
	int a=20;
	int b=30;
	fun(&a,&b);
	printf("The Value a = %d",a);
	printf("The value of b = %d",b);
	return 0;
}
