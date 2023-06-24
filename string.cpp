#include <stdio.h>
#include <string.h>
int main()
{
//	strcat (a,b); Used for adding two sting
//	a= where to store , b= from where data should be come
//
//strcpy(c,a); used for copying data from one to another variable
//
//strlen is used to count the character in Interger data type

char a[20]="Hello";
char b[10]="World";
char c[30];
strcat(a,b);
printf("%s\n",a);
strcpy(c,a);
printf("%s\n",c);
printf("%d",strlen(c));
	return 0;
}
//
//( aa) parenthesis
//aa= parameter

