#include <stdio.h>
int main(){
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	for(int i=1;i<=6;i++){
		for(int j=1;j<9;j++){
			printf("%d",n);
			n=n-1;
		}
		printf("\n");
	}
}
