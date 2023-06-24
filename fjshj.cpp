#include <stdio.h>
#include <math.h>
void prime(int x);
int main (){
	int a;
	printf("Check Whether a Number Is Armstrong, Prime And Perfect Number\n\n");
	printf("Enter any number : ");
	scanf("%d",&a);
	prime(a);
}
void prime(int x){
	int i,c=0;
	for(i=1;i<=x;i++){
		if (x%i==0){
			c++;
		}
	}
	if (c==2){
		printf("%d is prime",x);
	}
}

