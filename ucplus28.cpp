//Scoperesolution operator
#include<iostream>
using namespace std ;
 class rectangle {
 	
 	 public:
 	 	int len;
 	 	int bre;
 	 	
 	 	public:
 	 		int calculateArea(){
 	 			
 	 			return len * bre ;
 	 			
			  }
			int calculateParimeter();  
 };
 rectangle:: calculateParimeter(){
 	 return 2 * (len * bre);
 }
int main(){
	rectangle r1;
	r1.len =9 ;
	r1.bre = 22 ;
	cout<<"area"<<r1.calculateArea()<<endl;
	cout<<"Perimeter"<<r1.calculateParimeter()<<endl;
	return 0;
}
