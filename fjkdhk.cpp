 #include <stdio.h>
void prime ();
void armstrong();
void perfectnum();
 int main(){
 	int a;
 	printf("Armstrong = 0 && Prime = 1 && perfect Number = 2  : ");
 	scanf("%d",&a);
 	if (a==1){
 		prime();
	 }
	 else if (a==0){
	 	armstrong();
	 }
	 else if (a==2){
	 	perfectnum();
	 }
 	return 0;
 }
 void perfectnum(){
 	int p,i,m=0;
 	printf("Enter any number : ");
 	scanf("%d",&p);
 	for (i=1;i<p;i++){
 		if (p%i==0){
 			m=m+i;
		 }
	 }
	 if (m==p){
	 	printf("%d is perfect number ",p);
	 }
	 else {
	 	printf("Not perfect number ");
	 }
 }
 void armstrong (){
 	int y,a,b,c,n;
 	printf("Enter 3 digit any number : ");
 	scanf("%d",&y);
 	a=y%10;
 	b=(y/10)%10;
 	c=(y/100)%10;
 	n=a*a*a+b*b*b+c*c*c;
 	if(n==y){
 		printf("%d is armstrong",y);
	 }
	 else {
	 	printf("Not Armstrong");
	 }
 	
 }
 
 void prime(){
 	int i,x,m=0;
 	printf("Enter any Number : ");
 	scanf("%d",&x);
 	for (i=1;i<=x;i++){
 		if(x%i==0){
 			m++;
		 }
	 }
	 if (m==2){
	 	printf("%d is prime ",x);
	 }
	 else {
	 	printf("Not Prime ");
	 }
 }
