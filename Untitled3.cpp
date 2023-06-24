#include <stdio.h>
int main(){
	int a[3][3],b[3][3];
	printf("Enter The 3*3 In Matrix : ");
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter another 3*3 matrix : ");
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	return 0;
}
