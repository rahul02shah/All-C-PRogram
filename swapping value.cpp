#include <stdio.h>
void fun(int x, int y){
	 int c;
	 c=x;
	 x=y;
	 y=c;
	 
	 printf("%d\n",x);
	 
	 printf("%d",y);
}
int main()
{
	int a=20,b=30;
	fun(a,b);
	return 0;
}
