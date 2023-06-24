 #include <stdio.h>
void prime (int x);
 int main(){
 	int a;
 	printf("Enter any Number : ");
 	scanf("%d",&a);
 	prime(a);
 	return 0;
 }
 
 void prime(int x){
 	int i,m=0;
 	for (i=1;1<=x;i++){
 		if(x%i==0){
 			m++;
		 }
	 }
	 if (m==2){
	 	printf("%d is prime ",x);
	 }
 }
