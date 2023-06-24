#include <stdio.h>
void minmax(int m, int  n);
int main(){
	int a,b;
	printf("Enter any two number : ");
	scanf("%d%d",&a,&b);
	minmax(a,b);
	return 0;
}
void minmax (int m,int n){
	if (m>n){
		printf("%d is maximum \n",m);
		printf("%d is minimum ",n);
	}
	else{
		printf("%d is maximum \n",n);
		printf("%d is minimum ",m);
	}
}
