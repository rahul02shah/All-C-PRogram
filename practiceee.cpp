#include <stdio.h>
int main()
{
	int n,i,k=0;
	printf("Enter any number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			k=k+1;
		}
	}
	if(k==2){
		printf("Prime Number");
	}
	else {
		printf("Not a Prime Number");
	}
	return 0;
}
