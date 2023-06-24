#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter any number : ");
	scanf("%d",&a);
	printf("Enter any number : ");
	scanf("%d",&b);
	if(a<b){
		printf("%d Is Greater",b);
	}
	else {
		printf("%d is greater",a);
	}
	return 0;
	
}
