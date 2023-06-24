#include <iostream>
using namespace std;
class empinfo{
	protected:
	int id;
	string name;
	string department;
};
class empet:public empinfo{
	public:
		void ram(){
	cout<<"Enter The Id";
	cin>>id;
	cout<<"Enter the Name : ";
	cin>>name;
		}
};
class empjk:public empinfo{
	public:
	void shyam(){
		cout<<"Enter The Department : ";
	cin>>department;
	}
	
};
int main(){
	empjk obj;
	empet ijij;
	ijij.ram();
	obj.shyam();
	
}
