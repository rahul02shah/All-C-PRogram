//Write a program to check daigonal of matrix are zero or not?
#include <stdio.h>
int main(){
	int matrix[4][4];
	printf("Enter 4*4 Matrix : ");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	for(int b=0;b<4;b++){
		if(matrix[b][b]==0){
			for(int k=3;k>=0;k--){
				for(int l=0;l<4;l++){
					if(matrix[k][l]==0){
						printf("4*4 Matrix Daigonal Is Zero");
						break;
					}
					break;
				}
				break;
			}
			break;
		}
		else{
			printf("Daigonal Is Not Zero");
			break;
		}
	}
	return 0;
}
