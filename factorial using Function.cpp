#include <stdio.h>
int fact (int a);
int main (){
	int a;
	printf("Enter Any Number : ");
	scanf("%d",&a);
	printf("Factorial is : %d",fact(a));
	return 0;
}
int fact (int a){
	if(a==0){
		return 1;
	}
	else {
		return a*fact(a-1);
	}
}
int 
