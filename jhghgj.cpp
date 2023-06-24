#include <stdio.h>
int main(){
	int n,n1=0,n2=1,n3;
	printf("enter the range for fibonacci series : ");
	scanf("%d",&n);
	printf("%d\n%d",n1,n2);
	for(int i=2;i<n;i++){
		n3=n1+n2;
		printf("\n%d",n3);	
		n1=n2;
		n2=n3;
	} 
}
