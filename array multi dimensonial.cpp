#include <stdio.h>
int main(){
	int a[2][2];
	printf("Enter The Number FOR 3*3 matrix : ");
	for (int b=0;b<3;b++){
		for (int c=0;c<3;c++){
			scanf("%d",a[b][c]);
		}
	}
//	for (int d=0;d<3;d++){
//		for(int e=0;e<3;e++){
//			printf("%d",a[d][e]);
//		}
//		printf("\n");
//	}
	return 0;
}
