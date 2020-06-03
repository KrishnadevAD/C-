//function overloading 
#include<iostream>
using namespace std ;
class parent {
	public :
		void show(){
			cout<<"i am form parent class"<<endl;
			
		}
		void show(int a ){
			cout<<"i am from parent overload "<<endl;
			
		}
};
class child {
	public :
	void show(){
			cout<<"i am form Child class  "<<endl;
			
		}
	
};
int main(){
	parent p ;
	child c;
	p.show();
	p.show(1);
	c.show();
//parent * p = new child();

//p->show();
	
	return 0;
}
