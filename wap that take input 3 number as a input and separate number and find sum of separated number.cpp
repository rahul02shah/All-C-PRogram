#include <stdio.h>
int main ()
{
	int a,b,c,d,sum,sub,mul;
	printf("Enter any Three Digit Number : ");
	scanf ("%d",&a);
	b=a/100;
	printf("First output is : %d\n",b);
	c=(a%100)/10;
	printf("Second Output is : %d\n",c);
	d=(a%100)%10;
	printf("The third output is : %d\n",d);
	sum=b+c+d;
	printf ("the sum of three number is : %d\n",sum);
	sub=b-c-d;
	printf("The sub of 3 num is :%d\n",sub);
	mul=a*b*c;
	printf("the multiple of 3 no is : %d\n",mul);
	return 0;
}
