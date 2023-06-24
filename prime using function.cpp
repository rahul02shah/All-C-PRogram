#include <stdio.h>
int abb(int x);
int main(){
	int a,b;
	printf("Enter any number : ");
	scanf("%d",&a);
	b = abb(a);
	if(b==2){
		printf("Prime");
	}
	else {
		printf("Not Prime");
	}
	
}
int abb (int x){
	int y,z=0;
	for(y=1;y<=x;y++){
		if(x%y==0){
		 z=z+1;
		}
	}
	return z;
}
