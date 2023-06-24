#include <stdio.h>
int main()
{
	int a,i,k=0;
	for(a=1;a<=4;a++){
		for(i=1;i<=a;i++){
			k++;
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}
