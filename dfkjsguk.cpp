#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter any Number : ");
	scanf("%d",&b);
	for(a=1;a<=10;a++){
		printf("%d x  %d=%d\n",b,a,b*a);
		
	}
	return 0;
}
