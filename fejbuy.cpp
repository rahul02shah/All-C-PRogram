#include <stdio.h>
int main()
{
	int a,sum=0;
	for (a=100;a>=1;--a){
		sum=sum+a;
		printf("Sum is %d \n",sum);
	}
	
	return 0;
	
}
