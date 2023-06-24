#include <iostream>
using namespace std;
class employee{
	private :
		int a=15;
	public:
		int sent(){
			int b = a;
			return b;
		}
};
int main(){
	employee std;
	cout<<std.sent();
}
