#include <stdio.h>
void check(int x);
int main(){
	int a;
	printf("Enter Any Number : ");
	scanf("%d",&a);
	check (a);
}
void check (int x){
	if (x%2==0){
		printf("%d is even ",x);
	}
	else {
		printf("%d is odd",x);
	}
}
