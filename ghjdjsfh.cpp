#include <stdio.h>
int main(){
	int a,sum;
	printf("Enter The Range : ");
	scanf("%d",&a);
	for (int i=1;i<=a;i++){
		sum=sum+i*i;
	}
	printf("%d",sum);
}
