#include <stdio.h>
int main ()
{
	int a,b,c,d,sum;
	printf("enter any three digit number : ");
	scanf ("%d",&a);
	b=a/100;
	printf ("the first number is : %d\n",b);
	c=(a%100)/10;
	printf("the second number is : %d\n",c);
	d=(a%100)%10;
	printf("third number is : %d\n",d);
	sum=b+c+d;
	printf ("the sum is : %d",sum);
	return 0;
}
