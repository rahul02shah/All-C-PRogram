#include <stdio.h>
int main()
{
	 int n,i,c=0;
	 printf("Enter Any Number : ");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++){
	 	if (n%i==0){
	 		c++;
		 }
	 }
	 if(c==2){
	 	printf("THis is a prime number");
	 }
	 else{
	 printf("Not a prime number");
	 }
	return 0;
}
