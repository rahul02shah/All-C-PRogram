#include <stdio.h>
int fibonacci(int n){
	if (n==0){
		return 0;
	}
	else if (n==1){
		return 1;
	}
	else {
		int y;
		y=(fibonacci(n-1)+fibonacci(n-2));
		return y;
	}
	
}
int main(){
	int n,i=0;
	printf("enter the number :");
	scanf("%d",&nn);
	for(int j=1;j<=n;j++){
		printf("%d",fibonacci(i));
		i++;
	}
}
