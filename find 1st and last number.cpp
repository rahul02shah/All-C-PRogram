#include <stdio.h>
int main(){
	int n,a,firstnum,lastnum,sum;
	printf("Enter any number: ");
	scanf("%d",&n);
	lastnum=n%10;
	while(n>=10){
		n=n/10;
		firstnum=n;
		sum=firstnum+lastnum;
	}
	printf("%d ",sum);
	return 0;
}
