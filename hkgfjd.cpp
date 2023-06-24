#include <stdio.h>
int main(){
	int arr1[1000];
	int n,m=0,value=1;
	printf("Enter The Value Of N (No.of Series) : ");
	scanf("%d",&n);
	for (int i=0;i<=n-1;i++){
		arr1[i] = ++m;
	}
	for(int j=0;j<=n-1;j++){
			value = value * arr1[j];
		}
	printf("Product is %d",value);
}
