#include <stdio.h>
int main()
{
	int a,b,c=0;
	printf("Enter The Number : ");
	scanf("%d",&a);
	for(b=1;b<=10;b++){
		c=c+a;
		printf("The sum is %d \n",c);
	}
	return 0;
}
