#include <stdio.h>
void multiple()
{
	int a,b;
	printf("Enter Any Number For Table: ");
	scanf("%d",&a);
	for(b=1;b<=10;b++){
		printf("%d*%d=%d\n",a,b,a*b);
	}
}
int main()
{
	multiple();
	return 0;
}
