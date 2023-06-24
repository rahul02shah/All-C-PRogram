#include <stdio.h>
int main(){
	int a[90],temp,n;
	printf("Enter The size Of Array : ");
	scanf("%d",&n);
	for (int i=0 ;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++){
		for (int k=0;k<n;k++){
			if (a[j]<a[k]){
				temp = a[j];
				a[j]=a[k];
				a[k]= temp;
			}
		}
	}
	for (int m=0;m<n;m++){
		printf("%d",a[m]);
	}
	return 0;
}
