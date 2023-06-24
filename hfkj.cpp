#include <iostream>
using namespace std;
class app{
	protected:
		int id;
		string name;
	public:
		void cc(){
		
			cout<<"id is"<<id;
			cout<<"name is"<<name;
		}
};
class pcc:public app{
	protected:
		int phone;
	public:
		void racc(){
			cout<<"phone :"<<phone<<endl;
		}
};
class sijk:public pcc{
	public:
		void fun(){
			cout<<"Enter Your Name";
			cin>>name;
			cout<<"Enter your id:";
			cin>>id;
			cout<<"Enter Your phone:";
			cin>>phone;
		}
};
int main(){
	sijk obj;
	obj.fun();
	obj.cc();
	obj.racc();
}
