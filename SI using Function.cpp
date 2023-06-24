#include <stdio.h>
void interest(){
	int p,t,r,si;
	printf("Enter Principle: ");
	scanf("%d",&p);
	printf("Enter Time: ");
	scanf("%d",&t);
	printf("Enter Rate: ");
	scanf("%d",&r);
	si=(p*t*r)/100;
	printf("Simple Interest SI=%d",si);
}
int main()
{
	interest();
	return 0;
}
