#include <stdio.h>
int main(){
	int arr1 []={};
	arr1[0]=1;
	arr1[1]=2;
	int n;
	printf("Enter The Value Of N (No.of Series) : ");
	scanf("%d",&n);
	for (int i=2;i<=n;i++){
		arr1[i] = ++i;
	}
	printf("%d",arr1[0]);
}
