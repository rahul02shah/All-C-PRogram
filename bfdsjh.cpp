#include <stdio.h>
int main(){
	int flag=0,n;
	printf("enter The Number");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			flag++;
		}
	}
	if(flag==2){
		printf("%d Is prime",n);
	}
	else {
		printf("%d Is Composite",n);
	}
}
