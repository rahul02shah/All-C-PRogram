#include <stdio.h>
void prime(int c,int y);
int main(){
	int a,b;
	printf("Enter Starting Number : ");
	scanf("%d",&a);
	printf("Enter ending Number : ");
	scanf("%d",&b);
	prime(a,b);
	return 0;
}
void prime(int c,int y){
	int a,b,m=0;
	for (a=c;a<=y;a++){
		for(b=1;b<=y;b++){
			if(a%b==0){
				m=m+1;
			}
		}
			if(m==2){
		printf(" %d Is prime \n",a);
	}
	}

}
