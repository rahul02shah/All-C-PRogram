#include <stdio.h>
int main ()
{
	int a,b,c,d,sum;
	printf("Enter any Three Digit Number : ");
	scanf ("%d",&a);
	b=a/100;
	printf("First output is : %d\n",b);
	c=(a%100)/10;
	printf("Second Output is : %d\n",c);
	d=(a%100)%10;
	printf("The third output is : %d\n",d);
	sum=b+c+d;
	printf ("the sum of three number is : %d",sum);
	return 0;
}
