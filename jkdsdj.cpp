#include <stdio.h>
int main(){
	int i,a[10],n,small;
	printf("Enter Any 10 Number : ");
	for(i=1;i<11;i++){
		scanf("%d",&a[i]);
	}
	small=a[0];
	for (n=1;n<=10;n++){
		if (a[n]>a[0]){
			small = a[n];
		}
	}
	printf("Smallest Number Is : %d",small);
	return 0;
}
