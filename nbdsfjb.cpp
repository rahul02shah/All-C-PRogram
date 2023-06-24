#include <stdio.h>
void prime(int x);
int main(){
	int a;
	printf("check whether the number is prime , armstrong or perfect number\n");
	printf("Enter Any Number : ");
	scanf("%d",&a);
	prime(a);
}
void prime(int x){
	int i,c=0;
	for (i=1;i<=x;i++){
		if (x%i==0){
			c=c+1;
		}
	}
	if (c==0){
		printf("Prime Number %d ",x);
	}
}
