#include <iostream>
using namespace std;
//inhritance
class parent{
	protected :
		int a;
	public :
		void hello(){
			cout<<"Hello World!!!"<<endl;
		}
};
class child : public parent{
	public :
		void fun(){
			a=35;
			cout<<"The Number is : "<<a<<endl;
		}
};
int main(){
	child obj;
	obj.fun();
	obj.hello();
}
//inheritance in c++ 
