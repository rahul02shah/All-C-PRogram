#include <stdio.h>
int main(){
	int a,b,i,m;
	for(i=1;1<=100;i++){
		for (b=1;b<=i;b++){
			if (i%b==0){
				m++;
			}
		}
		if (m==2){
			printf("%d\n",i);
		}
	}
}
