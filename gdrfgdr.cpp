#include <stdio.h>
int main(){
	int a,b,c=1;
	printf("Enter Base : ");
	scanf("%d",&a);
	printf("Enter Power : ");
	scanf("%d",&b);
	while (b!=0){
		c=c*a;
		--b;
	}
    printf("%d",c);
	return 0;
}
