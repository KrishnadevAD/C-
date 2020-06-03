#include<iostream>
using  namespace std ;
class software{
	
	public :
		static int price ;
		static int getPrice(){
			return price;
		}
};
 int  software::price = 999000; 
// wee can change the price by changing above parice 
 int main(){
 
 cout<<"the price of the software is "<<software::getPrice();	
 	return 0 ;
 }
