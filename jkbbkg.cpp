#include <stdio.h>
int main ()
{
	int a,mul,m;
	printf("Enter any Number: ");
	scanf("%d",&a);
	while (a>0){
	m=a%10;
	mul=mul+m;
	a=a/10;
	}
	printf("%d",mul);
	return 0;
}
