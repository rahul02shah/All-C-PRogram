#include <stdio.h>
#include <math.h>
void prime(int x);
//void armstrong(int y);
int main(){
	int a;
	printf("check whether the number is prime , armstrong or perfect number\n");
	printf("Enter Any Number : ");
	scanf("%d",&a);
	prime(a);
//	armstrong(a);
}
//void armstrong(int y){
//	int n,count,a;
//	count = log10(y)+1;
//	for (n=1;n<=count;n++){
//		a=y%10;
//		printf("%d",a);
//	}
//}
void prime(int x){
	int i,c=0;
	for (i=1;i<=x;i++){
		if (x%i==0){
			c++;
		}
	}
	if (c==2){
		printf("%d Is Prime Number ",x);
	}
}
