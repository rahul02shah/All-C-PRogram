#include <stdio.h>
int main()
{
	int a=20;
	int *p;
	p=&a;
	*p=45;
	printf("Value is a = %d",a);
	return 0;
}
