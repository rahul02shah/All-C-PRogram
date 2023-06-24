#include <stdio.h>
void fun(int a,int b){
		int c = a+b;
		printf("%d",c);
	}
	void fun(int a){
		printf("%d",a);
	}
int main(){
	
	fun(5,8);
	return 0;
}
