#include <iostream>
using namespace std;
class a{
	protected:
	int a;
};
class b:public a{
	
};
class c:public b{
	public:
		void mon(){
			cout<<"Enter any number : ";
		cin>>a;
		cout<<a;
		}
};
int main(){
	c obj;
	obj.mon();
}
