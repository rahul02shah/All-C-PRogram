  #include <iostream>
  using namespace std;
  class A{
  	protected:
  		int x;
  	public:
  		void setdata(int a){
  			x=a;
		  }
  };
  class B:public A{
  	public:
  		void display(){
  			cout<<"The Number IS :"<<x<<endl;
		  }
  };
  class C:public A{
  	public:
  		void display(){
  			cout<<"The Number Is :"<<x;
		  }
  };
  int main(){
  	B b;
  	C c;
  	A *bb=&b;
  	A *cc=&c;
  	bb->setdata(60);
  	cc->setdata(88);
  	b.display();
  	c.display();
  	return 0;
  }
