#include <stdio.h>
int main(){
	int n,sum=0,orginal,remainder;
	printf("enter the number : ");
	scanf("%d",&n);
	orginal = n;
	while(n!=0){
		remainder=n%10;
		sum = sum + n*n*n;
		n = n/10;
	}
	if(sum!=orginal){
		printf("%d is not armstrong",orginal);
	}
	else {
		printf("%d is armstrong",orginal);
	}
}

