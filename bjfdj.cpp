#include <iostream>
using namespace std;
template <class T>
 class myprogram{
	private:
		int x;
	public:
		void setdata(T a){
			x=a;
		}
		int rendata(){
			return x;
		}
};
int main(){
	myprogram <int> obj;
	int b;
	float c;
	obj.setdata(20);
	b= obj.rendata();
	cout<<"Number Is : "<<b<<endl;
	myprogram <float> obj1;
	obj1.setdata(33.9);
	c=obj1.rendata();
	cout<<"Number Is : "<<b<<endl;
}
