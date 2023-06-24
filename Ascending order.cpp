#include <stdio.h>
int main(){
	int num[9];
	int i,j,a,n,m;
	printf("Enter any 10 number : ");
	for(m=0;m<10;m++){
		scanf("%d",&num[m]);
	}
	for (i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(num[i]>num[j]){
				a = num [i];
				num[i]=num[j];
				num[j]=a;
			}
		}
	}
	printf("Enter number arranged in ascending order is : \n");
	for(i=0;i<10;i++){
		printf("%d \n",num[i]);
	}
}
