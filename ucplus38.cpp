#include<iostream>
using namespace std ;
class base {
	public:
		void fun1(){
			cout<<"this is base fun1"<<endl;
			
		}
		void fun2(){
			cout<<"this is base fun2"<<endl;
			
		}
	
};
class derived : public base {
	public :
		void fun3(){
			cout<<"this is derived fun3"<<endl;
			
		}
	
};
  int main()  {
//  p;
  
//  	base *
//derived d;
//d
//we can convert the base class pointer to the derived class obj 
//but not derived class pointer to the base class obj
 base *p; //base class pointer
 p = new derived(); // derived class obj
 p->fun1();
 p->fun2();
 
 

  	
  	
  	
  	 return 0 ;
  	 
  }
