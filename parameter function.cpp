#include <stdio.h>
void ram(int x){
	printf("Is %d ",x);
}
int main()
{
	int a;
	printf ("Enter Any Number :");
	scanf("%d",&a);
	ram(a);
	return 0;
}
