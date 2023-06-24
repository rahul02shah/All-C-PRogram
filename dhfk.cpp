#include <stdio.h>
int main()
{
	int a,b,c,d,z;
	printf("Enter Any Number : ");
	scanf("%d",&a);
	b=a/100;
	c=(a%10);
	d=(a/100)%10;
	z=(b*b*b)+(d*d*d)+(c*c*c);
	if(z==a){
		printf("The number Is arrm strong :");
	}
	return 0;
}
