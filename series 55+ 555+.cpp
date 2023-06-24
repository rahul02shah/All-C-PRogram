#include <stdio.h>
int main()
{
	int i,n,a=0;
	long int sum=0;
	printf("Enter Value Of N :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=a*10+5;
		sum=sum+a;
		printf("%d",a);
		if (i<n){
		printf("+");
	}
	}
	printf("\nSum Is : %li",sum);
	return 0;
}
