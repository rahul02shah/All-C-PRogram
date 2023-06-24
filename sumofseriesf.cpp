#include<stdio.h>
int fact(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
/*int addseries(int n)
{
	int sum=0;
	sum+=n;
	return sum;
		
}*/
int main()
{
	int n,i,s=0;
	printf("enter value of n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s= s+(fact(i)/i);
		
	}
	printf("sum of series is %d",s);
	return 0;
	
}
