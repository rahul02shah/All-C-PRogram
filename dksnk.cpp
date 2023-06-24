#include <stdio.h>
int main(){
	int i,a[10],average,n,sum=0;
	printf("Enter Any 10 Number : ");
	for (i=1;i<=10;i++){
		scanf("%d",&a[i]);
	}
	for(n=1;n<=10;n++){
		sum= sum + a[n];
	}
	average = sum/10;
	printf("Average is %d",average);
	return 0;
}
