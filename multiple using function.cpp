#include <stdio.h>
void fun(int b){
	int i;
	for(i=1;i<=10;i++){
		printf("%d*%d=%d\n",b,i,b*i);
	}
}
int main()
{
	int a;
	printf("Enter any number: ");
	scanf("%d",&a);
	fun(a);
	return 0;
}


