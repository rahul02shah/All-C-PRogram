#include <stdio.h>
void sum(int a){
	printf("sum is = %d",a);
}
int main()
{
	int x,y,z;
	printf("Enter Two number for sum: ");
	scanf("%d%d",&x,&y);
	z=x+y;
	sum(z);
	return 0;
}
