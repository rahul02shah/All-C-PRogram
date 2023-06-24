#include <stdio.h>
int main(){
	int n,firstnum,lastnum,a;
	printf("Enter any NUmber : ");
	scanf("%d",&n);
	lastnum=n%10;
	while(n>=10){
		n=n/10;
		firstnum=n;
	}
	a=firstnum;
	firstnum=lastnum;
	lastnum=a;
	printf("%d%d",firstnum,lastnum);
	return 0;
}
