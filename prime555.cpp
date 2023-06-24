#include <stdio.h>
int main (){
	int a,b,c=0;
	printf("Enter A Number : ");
	scanf("%d",&a);
	for(b=1;b<=a;b++){
	if(a%b==0){
		c=c+1;
	}
	}
	if(c==2){
		printf("Prime");
	}
	else{
		printf("Not Prime");
	}
	return 0;
}
