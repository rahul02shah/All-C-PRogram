#include <stdio.h>
int main(){
	int a=20;
	int *p;
	p=&a;
	printf("%d\n",p);
	printf("%d",*p);
}
