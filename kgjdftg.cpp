#include <stdio.h>
int main ()
{
	int a,b,c=0;
	printf("enter any number : ");
	scanf("%d",&a);
	while (a!=0){
		b=b/10;
		c++;
	}
	printf("%d is digit number ",c);
	return 0;
}
