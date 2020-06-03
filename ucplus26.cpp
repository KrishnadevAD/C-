//to find the area of the rectangle
#include<iostream>
using namespace std ;
 
 	class rectangle{
 		public:
 			int length;
 			int breath;
 			void getArea(){
 				cout<<"the area is "<<(length * breath);
			 }
	 };
 	int main(){
 		rectangle rect;
 		rect.length =10;
 		rect.breath = 23;
 		rect.getArea();
 		
 		
 		
 	return 0;	
	 }
 
 
