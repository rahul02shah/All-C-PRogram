#include <stdio.h>
int main ()
{
	int math,english,science,social,nepali,total;
	float percentage;
	printf(" Enter The Marks Of math,english,science,social,nepali : ");
	scanf ("%d,%d,%d,%d,%d",math,english,science,social,nepali);
	total=math+english+science+social+nepali;
	printf ("The Total Marks Is : %d",total);
	percentage=(total/5)*100;
	printf("Your Percentage is : %d",percentage);
	return 0;
}
