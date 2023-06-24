#include <stdio.h>

void amm(int x[]){
	int i;
	for(i=0;i<=2;i++){
		printf("%d\n",x[i]);
	}
	
}

int main()
{
	int a[10]={5,6,9};
	amm(a);
	return 0;
	
}

