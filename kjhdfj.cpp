#include <stdio.h>
int main(){
	int a[2][3],b[2][3],sum[2][3];
	printf("Enter The 2*3 Matrix : ");
	for (int i=0; i<2;i++){
		for (int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter The 2*3 Matrix : ");
	for (int i=0;i<2;i++){
		for (int j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for (int i=0;i<2;i++){
		for (int j=0;j<3;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for (int i=0;i<2;i++){
		for (int j=0;j<3;j++){
			printf("%d",sum[i][j]);
		}
		printf("\n");
	}
	
}
