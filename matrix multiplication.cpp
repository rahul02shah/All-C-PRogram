#include <stdio.h>
int main (){
	int a[3][3],b[3][2],c[3][2],i,j,m,n,k,sum=0;
	printf("Enter 3*3 Matrix For Multiplication : ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",a[i][j]);
		}
	}
	printf("Enter 3*2 Matrix For Multiplication : ");
	for(m=0;m<3;m++){
		for (n=0;n<2;n++){
			scanf("%d",b[m][n]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<2;k++){
				sum = sum + a[i][j]*b[j][k];
			}
			c[i][j]=sum;
		}
	}
	for(m=0;m<3;m++){
		for (n=0;n<2;n++){
			scanf("%d",c[m][n]);
		}
	}
}
