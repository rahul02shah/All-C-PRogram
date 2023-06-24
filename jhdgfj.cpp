#include <stdio.h>
#include <math.h>
int main(){
	int p,r,n,f;
	printf("enter principal : ");
	scanf("%d",&p);
	printf("enter the interest : ");
	scanf("%d",&r);
	printf("enter The no of years : ");
	scanf("%d",&n);
	f=pow(n,(1+r/100));
	printf("%d",f);
}
