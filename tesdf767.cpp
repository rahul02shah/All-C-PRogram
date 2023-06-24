#include <stdio.h>
int main(){
	int arr[]={1,1,2,2,3,3,4,4,5,5};
	int count ;
	for(int i =0 ; i<=9;i++){
		for(int j=0;i<=9;j++){
			if(arr[i]^arr[i]==0){
				count++;
			}
			else{
				printf("none of the condition matched");
			}
		}
		printf("number of %d is : %d",arr[i],count);
	}
//	printf("%d",arr[0])
	return 0;
}
