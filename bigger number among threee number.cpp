#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any any three number : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && a<c){
		printf("%d is Smaller",a);
	}
	else if(b<a && b<c){
		printf("%d is Smaller",b);
	}
	else {
		printf("%d is Smaller",c);
	}
	return 0;
}
