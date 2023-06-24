#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter Base : ");
	scanf("%d",&a);
	printf("Enter Power : ");
	scanf("%d",&b);
	for(c=1;c<=b;c++){
		d=d*a;
	}
	printf("%d",d);
	return 0;
}
