#include <stdio.h>
int main()
{
	int b,a;
	printf("Enter The number for multiple table: ");
	scanf("%d",&b);
	for(a=1;a<=10;a++){
		printf(" The multiple table is : %d*%d=%d\n",b,a,b*a);
	}
	return 0;
}
