#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter The Number For Table : ");
	scanf("%d",&a);
	for(b=1;b<=10;b++){
		c=a*b;
		printf("Your Table Is : %d*%d=%d\n",a,b,c);
	}
	return 0;
}
