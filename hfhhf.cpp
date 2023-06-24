#include <stdio.h>
int main ()
{
	int a,n,sum=0;
	printf("Enter any Nth Number : ");
	scanf("%d",&n);
	for (a=1;a<=n;a++){
		 if(a%2!=0){
		 	sum+=a;
		 }
	}
	printf("Sum Of Natural Number Up to %d = %d",n,sum);
	return 0;
}
