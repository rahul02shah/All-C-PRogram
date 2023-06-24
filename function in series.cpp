#include <stdio.h>
int fact(int a){
	int b=1,c;
	for (c=1;c<=a;c++){
		b=b*c;
	}
	return b;
}
int main(){
	int a,i,sum=0;
	printf("Enter Any Number : ");
	scanf("%d",&a);
	for (i=1;i<=a;i++){
		sum+=fact(i)/i;
	}
	printf("Sum Of Series is %d",sum);
	return 0;
}
