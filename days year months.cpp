#include <stdio.h>
int main(){
	int days,year,weeks,months,remainingdays;
	printf("Enter The Days : ");
	scanf("%d",&days);
	year = days/365;
	days = days - (365*year);
	months = days/30;
	remainingdays = days - (months*30);
	printf("%d Year %d Months %d Days",year,months,remainingdays);
	return 0;
}
