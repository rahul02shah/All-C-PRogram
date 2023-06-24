#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter Any Number : ");
	scanf("%d",&b);
	while(a<=10){
		printf("The Table is %d*%d=%d\n",b,a,a*b);
		a++;
	}
	return 0;
}
