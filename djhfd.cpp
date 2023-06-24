#include <iostream>
using namespace std;
template <class T,class P>
 class myprogram{
	private:
		T x;
		P y;
	public:
		void setdata(T a,P b){
			x=a;
			y=b;
		}
		P rendata(){
			return (x+y);
		}
};
int main(){
//	myprogram <int> obj;
//	int b;
//	float c;
//	string d;
//	obj.setdata(20);
//	b= obj.rendata();
//	cout<<"Number Is : "<<b<<endl;
//	myprogram <float> obj1;
//	obj1.setdata(33.9);
//	c=obj1.rendata();
//	cout<<"Number Is : "<<c<<endl;
//	myprogram <string> obj2;
//	obj2.setdata("Rahul");
//	d = obj2.rendata();
//	cout<<d;
	myprogram <int,int> obj3;
	int a;
	float b;
	obj3.setdata(20,30);
	b = obj3.rendata();
	cout<<b;
	
	myprogram <int,float> obj4;
	float g;
	obj3.setdata(20,30.99);
	g = obj4.rendata();
	cout<<g;
}
