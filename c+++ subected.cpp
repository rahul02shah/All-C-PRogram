#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e,total;
	float per;
	cout<<"Enter Marks Of Math :";
	cin>>a;
	cout<<"Enter Marks Of Nepali :";
	cin>>b;
	cout<<"Enter Marks Of Science :";
	cin>>c;
	cout<<"Enter Marks Of English :";
	cin>>d;
	cout<<"Enter Marks Of Computer :";
	cin>>e;
	total = a+b+c+d+e;
	cout<<"Total is : "<<total<<endl;
	per = (total/5);
	cout<<"Percentage is : "<<per<<endl;
	if ( per >=40 && per<=50){
		cout<<"Passed";
	}
	else if(per>50 && per<=70){
		cout<<"Third Division";
	}
	else if(per>70 && per<=80){
		cout<<"Second Division";
	}
	else if(per>80 && per<=90){
		cout<<"First Division";
	}
	else if(per>90 && per<=100){
		cout<<"Distinction";
	}
	else{
		cout<<"Failed";
	}
	return 0;
}
