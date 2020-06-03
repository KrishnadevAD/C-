//constructor
#include<iostream>
using namespace std;
class rectangle {
	public:
		int len;
		int bre;
		 public:
		 void GetArea(){
		 	cout<<"the are is "<<(len*bre);
		 }
};
 int main(){
 	rectangle r1;
 	r1.len =199;
	r1.bre = 38;
	r1.GetArea(); 	
 	return 0;
 }
