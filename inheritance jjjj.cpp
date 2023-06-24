#include <iostream>
using namespace std;
class test {
	protected:
	int a;
	public :
		void printdata(){
			cout<<a;
		}
};
class testy : public test{
	public:
		void fun(){
			cout<<"Enter Any Number : ";
			cin>>a;
			cout<<a<<endl;
		}
};
int main(){
	testy obj;
	obj.fun();
	obj.printdata();
	return 0;
}
