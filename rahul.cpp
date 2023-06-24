#include <stdio.h>
int main ()
{
	int a=1;
//	int b=1;
	int c;
	c=++a + ++a + ++a;
	printf("The value of c is : %d",c);
	return 0;
}
