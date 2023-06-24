#include <stdio.h>

int main(){
	int row = 3, col = 3,sum=0;
	int a[row][col];
	int b[row][col];
	int res[row][col];
	int result;
	
	printf("Enter The first 3*3 Matrix : ");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d", *(a+i) + j);
		}
	}
	printf("Enter The second 3*3 Matrix : ");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d", *(b+i) + j);
		}
	}
	for (int i=0;i<row;i++){
		for (int j=0;j<col;j++){
			for (int k=0;k<3;k++){
				sum = sum + (*(*(a+i) + j))*(*(*(b+j) + k));
			}
			 *(*(res+i)+j)=sum;
		}
	}
	printf("matrix Multliplication Of 3*3 Matrix : ");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\t",*(*(res+i)+j));
		}
		printf("\n");
	}
}
