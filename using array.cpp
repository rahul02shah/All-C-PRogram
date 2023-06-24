#include <stdio.h>
int main()
{
	int arr[5],i,b,sum;
	for(i=0;i<=4;i++){
		printf("Enter any nUmber : ");
		scanf("%d",&arr[i]);
		sum+=arr[i];
//		printf("%d\n",sum);
		
	}
		printf("%d\n",sum);
//	for(b=0;b<5;b++){
//		sum+=arr[b];
//		printf("%d\n",sum);
//	}
	return 0;
}
