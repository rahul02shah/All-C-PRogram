#include <stdio.h>
#include <math.h>
int main()
{
	long int a,count;
	printf("Enter any Number: ");
	scanf("%ld",&a);
	count=log10(a)+1;
	printf("%ld",count);
	return 0;
}
